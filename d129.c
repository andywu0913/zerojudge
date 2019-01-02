#include <stdio.h>
#include <stdlib.h>

int theXthNumber2Find = 1500;
int primeNum[] = {2, 3, 5};
int primeNumSize = sizeof(primeNum) / 4;

typedef struct doubleLinkedList
{
	unsigned long long int number;
	struct doubleLinkedList *prevNode;
	struct doubleLinkedList *nextNode;
}doubleLinkedList;

void insertNode(doubleLinkedList *prevNode, doubleLinkedList *nextNode, unsigned long long int num);

int main(void)
{
	doubleLinkedList *list = (doubleLinkedList*)malloc(sizeof(doubleLinkedList));
	list->number = 1;
	list->prevNode = NULL;
	list->nextNode = NULL;
	int counter = 1;

	doubleLinkedList *currentNode = list;
	doubleLinkedList *lastNode = list;
		
	while(counter < (theXthNumber2Find + primeNumSize * 100))
	{
		for(int i = 0; i < primeNumSize; i++)
		{
			if(currentNode->number * primeNum[i] > lastNode->number)
			{
				insertNode(lastNode, NULL, currentNode->number * primeNum[i]);
				counter++;
				lastNode = lastNode->nextNode;
			}
			else
			{
				doubleLinkedList *tempLastNode = lastNode;
				while(currentNode->number * primeNum[i] < tempLastNode->number)
					tempLastNode = tempLastNode->prevNode;
				if(currentNode->number * primeNum[i] > tempLastNode->number)
				{
					insertNode(tempLastNode, tempLastNode->nextNode, currentNode->number * primeNum[i]);
					counter++;
				}
			}
		}
		currentNode = currentNode->nextNode;
	}

	// for (doubleLinkedList *current = list; current != NULL; current = current->nextNode)
	// 	printf("%llu ", current->number);
	// printf("\n");

	unsigned long long int result;
	for (doubleLinkedList *current = lastNode; counter > theXthNumber2Find; counter--)
	{
		current = current->prevNode;
		result = current->number;
	}
	printf("The %d'th ugly number is %llu.\n", theXthNumber2Find, result);

	return 0;
}

void insertNode(doubleLinkedList *prevNode, doubleLinkedList *nextNode, unsigned long long int num)
{
	doubleLinkedList *newNode = (doubleLinkedList*)malloc(sizeof(doubleLinkedList));
	newNode->number = num;
	newNode->prevNode = prevNode;
	newNode->nextNode = nextNode;
	if(prevNode != NULL)
		prevNode->nextNode = newNode;
	if(nextNode != NULL)
		nextNode->prevNode = newNode;
}
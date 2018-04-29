/* 內容
 * 排列數字一定很容易嗎
 * 現在給你一堆數字
 * 請你幫我排序
 *
 * 輸入說明
 * 多筆測資
 * 每筆測資第一行輸入一正整數N
 * 皆下來的N行每行有一個整數Xi (1 <= i <= N)
 * （0 < N < 1000, | Xi | < 10100) 
 *
 * 輸出說明
 * 將排序好的數字由小到大分行輸出
 * 範例如下 
 *
 * 範例輸入
 * 5
 * 1
 * 3
 * 2
 * 5
 * 0
 * 4
 * 222222222222222222222222222
 * 111111111111111
 * -44444444444444444444444444444444444444444444444444444
 * 33333333333333333333333333333333333333333333
 *
 * 範例輸出
 * 0
 * 1 
 * 2 
 * 3 
 * 5
 * -44444444444444444444444444444444444444444444444444444
 * 111111111111111
 * 222222222222222222222222222
 * 33333333333333333333333333333333333333333333
 *
 * 測資資訊：
 * 記憶體限制： 512 MB
 * 公開 測資點#0 (100%): 1.0s , <1M
 * 提示 ： 
 * 標籤:
 * 字串 排序
 * 出處: 
 * [編輯： d0789117 (洪湧是神人)]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char number[102];
	struct node* leftNode;
	struct node* rightNode;
}node;

void addNode(node **treeRoot, node *tempNode);
void printPositiveTree(node *treeRoot);
void printNegativeTree(node *treeRoot);

int main(void)
{
	int rows;
	
	while(scanf("%d", &rows) != EOF)
	{
		node *positiveTreeRoot = NULL;
		node *negativeTreeRoot = NULL;
		
		for (int i = 0; i < rows; i++)
		{
			node *tempNode = malloc(sizeof(node));
			scanf("%s", tempNode->number);

			tempNode->leftNode = NULL;
			tempNode->rightNode = NULL;

			if(tempNode->number[0] == '-')
				addNode(&negativeTreeRoot, tempNode);
			else
				addNode(&positiveTreeRoot, tempNode);
		}

		printNegativeTree(negativeTreeRoot);
		printPositiveTree(positiveTreeRoot);
	}
	return 0;
}

void addNode(node **treeRoot, node *tempNode)
{
	if((*treeRoot) == NULL)
		(*treeRoot) = tempNode;
	else
	{
		if(strlen(tempNode->number) < strlen((*treeRoot)->number))
			addNode(&(*treeRoot)->leftNode, tempNode);
		else if(strlen(tempNode->number) > strlen((*treeRoot)->number))
			addNode(&(*treeRoot)->rightNode, tempNode);
		else if(strcmp(tempNode->number, (*treeRoot)->number) < 0)
			addNode(&(*treeRoot)->leftNode, tempNode);
		else
			addNode(&(*treeRoot)->rightNode, tempNode);
	}
}

void printPositiveTree(node *treeRoot)
{
	if(treeRoot != NULL)
	{
		printPositiveTree(treeRoot->leftNode);
		printf("%s\n", treeRoot->number);
		printPositiveTree(treeRoot->rightNode);
		free(treeRoot);
	}
}

void printNegativeTree(node *treeRoot)
{
	if(treeRoot != NULL)
	{
		printNegativeTree(treeRoot->rightNode);
		printf("%s\n", treeRoot->number);
		printNegativeTree(treeRoot->leftNode);
		free(treeRoot);
	}
}

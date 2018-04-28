/* 內容：
* 7000單字
* 所有高中生的夢魘
* 但對聰明的有駿可就不一樣了
* 號稱擁有70000字的他 
* 對於已經背過的單字嗤之以鼻
* 因為這讓他感到很無聊
* 但這世界上總會有他沒見過的單字吧
* 沒關係
* 他一眼就記住了 
* 還好
* 老天是公平的
* 有駿不會寫程式
* 他總是對於判斷自己有沒有背過這些單字感到麻煩...... 
* 聰明的我們
* 寫個程式幫幫有駿吧 

* 輸入說明：
* 每個測資點只有一個測資
* 第一行有一個整數 N (1 < N < 70000)
* 代表有駿所知的單字數 
* 接下來的2到N+1行每行有一個長度不到20的不重複英文單字
* 所有單字僅包含英文小寫字元
* 第N+2行有一個正整數Q ( 1 < Q < 70000)
* 接下來的Q行每行有一個要查詢的單字
* 所有單字僅包含英文小寫字元並且長度不到20

* 輸出說明：
* 對於每一個查詢的單字輸出查詢結果分行輸出
* 如果有駿已經背過請輸出"yes"
* 如果有駿尚未背過請輸出"no" 同時把此單字放到有駿的腦海中
* 請參考範例測資 

* 範例輸入：
* 4
* henry
* john
* mary
* cindy
* 5
* andy
* cindy
* vicky
* leo
* leo

* 範例輸出：
* no
* yes
* no
* no
* yes

* 測資資訊：
* 記憶體限制： 512 MB
* 公開 測資點#0 (99%): 1.0s , <1K
* 公開 測資點#1 (1%): 10.0s , <10M

* 提示 ： 
* 測資頗大

* 標籤:
* 出處: 
* [編輯： d0789117 (洪湧是神人)]
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char* data;
	struct node* left;
	struct node* right;
}node;

int addNode(node** binTree, char* data);

int main(void)
{
	int knownVocvabs;
	int newVocabs;
	node* vocabFirstLetterArray[26];

	for (int i = 0; i < 26; i++)
		vocabFirstLetterArray[i] = NULL;

	scanf("%d", &knownVocvabs);
	for (int i = 0; i < knownVocvabs; i++)
	{
		char* temp = (char*)calloc(20, sizeof(char));
		scanf("%s", temp);
		addNode(&vocabFirstLetterArray[temp[0] - 'a'], temp);
	}

	scanf("%d", &newVocabs);
	for (int i = 0; i < newVocabs; i++)
	{
		char* temp = (char*)calloc(20, sizeof(char));
		scanf("%s", temp);
		int isKnown = addNode(&vocabFirstLetterArray[temp[0] - 'a'], temp);
		if(isKnown)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

int addNode(node** binTree, char* data)
{
	while((*binTree) != NULL)
	{
		int memcmpResult = memcmp((*binTree)->data, data, 20);
		if(memcmpResult == 0)
			return 1;
		else if(memcmpResult < 0)
			binTree = &(*binTree)->right;
		else
			binTree = &(*binTree)->left;
	}
	(*binTree) = (node*)malloc(sizeof(node));
	(*binTree)->data = data;
	(*binTree)->right = NULL;
	(*binTree)->left = NULL;
	return 0;
}

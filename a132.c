/* 內容 ：
 * 整數 n 的「同位元」定義為：其二進位表示法中每位元的和再除以 2 的餘數。例如：21 = 101012 的二進位有三個 1，因此它的同位元為 3 (mod 2)，或 1。
 * 在此，你要計算一個整數 1 ≤ I ≤ 2147483647 的同位元。
 * 輸入說明
 * 輸入的每一行有一個整數 I，而 I = 0 表示輸入結束，該行無需處理。
 * 輸出說明
 * 對於輸入中的每個整 I，你要印一行 The parity of B is P (mod 2).，其中 B 是 I 的二進位表示法。
 * 範例輸入
 * 1
 * 2
 * 10
 * 21
 * 0
 * 範例輸出
 * The parity of 1 is 1 (mod 2).
 * The parity of 10 is 1 (mod 2).
 * The parity of 1010 is 2 (mod 2).
 * The parity of 10101 is 3 (mod 2).
 */

#include <stdio.h>

void decimal2binary(char[], int);
void skipLeadingZero(char[]);
int countOnes(char[]);

int main()
{
	unsigned int temp;
	while(scanf("%d", &temp) != EOF && temp != 0)
	{
		char binary[33];
		decimal2binary(binary, temp);
		skipLeadingZero(binary);
		printf("The parity of %s is %d (mod 2).\n", binary, countOnes(binary));
	}
	return 0;
}

void decimal2binary(char binary[], int number)
{
	for(int i = 0 ; i < 32 ; i++)
		binary[i] = '0';
	binary[32] = '\0';
	for(int i = 31 ; number != 0 ; i--)
	{
		binary[i] = number % 2 + '0';
		number >>= 1;
	}
}

void skipLeadingZero(char binary[])
{
	int numberOfZeros = 0;
	while(binary[numberOfZeros] == '0')
	{
		numberOfZeros++;
	}
	for(int i = 0 ; numberOfZeros < 33 ; i++, numberOfZeros++)
		binary[i] = binary[numberOfZeros];
}

int countOnes(char binary[])
{
	int count = 0;
	for(int i = 0 ; binary[i] != '\0' ; i++)
		if(binary[i] == '1')
			count++;
	return count;
}
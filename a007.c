/* ���e �G
 * �ЧP�_�Y�ƬO�_�����
 * ��J���� �G
 * ��J���h�մ��ո�ơ]�HEOF�����^�A�C�մ��ո�ƥe�@��A�u�]�t�@�Ӿ��x, 2 �� x �� 2147483647�C
 * ���ո�Ʀܦh��200000���C
 * ��X���� �G
 * ���C�մ��ո�ơA�p�G��J��x����ơA�h��X�@��u��ơv�]���t�޸��^�F�_�h��X�@��u�D��ơv�]���t�޸��^�C�Ԩ��d�Ҵ��ո�ơC
 * �d�ҿ�J �G
 * 13
 * 14
 * �d�ҿ�X:
 * ���
 * �D���
 * ���� �G
 * �`�N�O��
 *
 * ����:
 * �ت� �ƽ� ���
 * �X�B:
 */

#include<stdio.h>
#define SIZE 46340
//Square root of 2^31-1 is 46340.95

unsigned char tableNumberOrdered[SIZE+1];
unsigned int tableOnlyPrimeNum[SIZE+1];
unsigned int tableOnlyPrimeNumLastIndex=0;
unsigned int num;

int tableSearch(unsigned int number);

int main()
{
    for(unsigned int i=2;i<=SIZE;i++)
        tableNumberOrdered[i]=1;

    tableNumberOrdered[0]=0;
    tableNumberOrdered[1]=0;

    for(unsigned int i=2;i<=SIZE;i++)
        if(tableNumberOrdered[i]==1)
        {
            tableOnlyPrimeNum[tableOnlyPrimeNumLastIndex]=i;
            tableOnlyPrimeNumLastIndex++;

            for(unsigned int j=(i*i);j<=SIZE;j+=i)
                tableNumberOrdered[j]=0;
        }

    while(scanf("%d",&num)!=EOF)
    {
        if(tableSearch(num))
            printf("���\n");
        else
            printf("�D���\n");
    }
    return 0;
}

int tableSearch(unsigned int number)
{
    if(number<=SIZE)
        if(tableNumberOrdered[number]==1)
            return 1;
        else
            return 0;
    else
        for(unsigned int i=0;i<tableOnlyPrimeNumLastIndex;i++)
            if(number%tableOnlyPrimeNum[i]==0)
                return 0;
        return 1;
}

/* 內容
 * John是一個赫赫有名的藝術品投資專家，每個月都會計算藝術品投資的盈虧，以審視其獲利。John每個月月底，即開始計算其每一件藝術品的獲利狀況。由於藝術品的種類繁多，John每個月總是要花費許多時間，計算其獲利狀況，以決定是否要將藝術品出脫。因此，他想麻煩你撰寫一支程式，計算每一件藝術品的盈虧狀況。
 *
 * 輸入說明
 * 測試資料的第一行是一個整數 n，代表John總共投資了 n 件藝術品。以下 n 行，每一行有兩個整數 m 和 p，m 是該藝術品投資的金額、p 是該藝術品目前的價值。其中 1≤m,p≤100000，單位是仟元。
 *
 * 輸出說明
 * 每一件藝術品依據它的投資金額及目前價值，計算並輸出其獲利率 x。x為正，表示獲利；x為負表示虧損。若x≥10.00% 或 x≤-7.00%，即售出該藝術品，以「dispose」表示；否則，即保留該藝術品，以「keep」表示。輸出格式，請見輸出範例。
 *
 * 範例輸入
 * 4
 * 200 177
 * 200 200
 * 892 1000
 * 1000 992
 *
 * 範例輸出
 * -11.50% dispose
 *   0.00% keep
 *  12.11% dispose
 *  -0.80% keep
 *
 * 測資資訊：
 * 記憶體限制： 512 MB
 * 公開 測資點#0 (20%): 1.0s , <1M
 * 公開 測資點#1 (30%): 1.0s , <1M
 * 公開 測資點#2 (50%): 1.0s , <1M
 * 提示 ： 
 * 若計算結果為：-0.00%，請輸出：0.00%
 * 標籤:
 * 浮點數 誤差
 * 出處: 
 * [編輯： tarco (章魚)]
 */

#include <stdio.h>

typedef struct Artwork
{
	int buyPrice;
	int currentValue;
}Artwork;

int main(void)
{
	int num;
	scanf("%d", &num);
	
	Artwork artwork[num];
	
	for (int i = 0; i < num; i++)
		scanf("%d %d", &artwork[i].buyPrice, &artwork[i].currentValue);

	for (int i = 0; i < num; i++)
	{
		long long int rawResult = ((artwork[i].currentValue - artwork[i].buyPrice) * 100000) / (double)artwork[i].buyPrice;
		rawResult = (long long int)(rawResult + (rawResult >= 0 ? 5 : -5));
		rawResult /= 10;

		char sign = (rawResult >= 0 ? 1 : -1);
		int integer = (rawResult / 100) * sign;
		int fraction = (rawResult % 100) * sign;

		if(sign > 0)
			printf("%3d", integer);
		else
		{
			if(integer >= 10)
				printf("-%d", integer);
			else
				printf(" -%d", integer);
		}
		printf(".");
		printf("%02d%%", fraction);

		if((((double)artwork[i].currentValue / artwork[i].buyPrice) >= 1.1) || (((double)artwork[i].currentValue / artwork[i].buyPrice) <= 0.93))
			printf(" dispose\n");
		else
			printf(" keep\n");
	}

	return 0;
}

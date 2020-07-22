// challenge04. 잔돈을 하나도 남기지 않고 세가지 물건을 하나 이상씩 구매하는 경우의 수를 나열
// 내가 가지고 있는 금액: 3500원
// 크림빵 500원
// 새우깡 700원
// 콜라 400원

#include <stdio.h>

int select(){
	int money = 3500;
	int cream = 500;
	int shrimp = 700;
	int coke = 400;
	
	int creamCnt=1;
	int shrimpCnt=1;
	int cokeCnt=1;
	int total;
		
	while(money){	
		total = cream*creamCnt + shrimp*shrimpCnt + coke*cokeCnt;
		money -= total;

		if(money-cream*creamCnt){
					

		}
		printf("크림빵: %d, 새우깡: %d, 콜라: %d \n", creamCnt,shrimpCnt,cokeCnt);
		
	}
	
	return 0;
}

int main(){

	printf("현재 당신이 소유하고 있는 금액: 3500원\n");
	printf("크림빵 500원, 새우깡 700원, 콜라 400원\n");
	
	select();		


}


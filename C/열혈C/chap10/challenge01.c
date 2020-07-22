// 01. 10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void){
	int decNum = 0;
	printf("enter the Decimal number: ");
	scanf("%d",&decNum);
	
	printf("hexadecimal is: %x \n",decNum);

}

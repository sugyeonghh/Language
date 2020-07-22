// 두 개의 정수를 입력받아서 최대 공약수(GCD)를 구하는 프로그램
// ex) input: 6, 9 -> GCD: 3

#include <stdio.h>

int gcd(int num1, int num2){
	int result;

	if(num1<=num2){
		while(num2){
			result = num1%num2;
			num1 = num2;
			num2 = result;
		}
		return num1;
	}else{
		while(num1){
			result = num2%num1;
			num2 = num1;
			num1 = result;
		}
		return num2;
	}
}


int main(){
	int num1=0, num2=0;
	
	printf("최대공약수 구하기 \n");
	printf("두 개의 정수 입력: ");
 	scanf("%d %d", &num1, &num2);
	printf("입력한 정수: %d, %d \n", num1, num2);
	
	printf("최대공약수: %d \n", gcd(num1,num2));
	
	return 0;	
}

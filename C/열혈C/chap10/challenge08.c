// challenge08. 2의 n제곱을 구하는 함수를 재귀적으로 구현하는 프로그램

#include <stdio.h>

int recursiveMultiple(int num){
	if(num!=0){
		return 2*recursiveMultiple(num-1);
	}else{
		return 1;
	}
}

int main(){
	int num;
	printf("2의 n제곱을 구하는 재귀함수 \n");
	printf("정수 n입력: ");
	scanf("%d", &num); 

	printf("2의%d제곱: %d \n",num,recursiveMultiple(num));	
}

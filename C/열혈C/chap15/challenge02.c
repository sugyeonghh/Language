#include <stdio.h>

void intoBinaryNum(int num){
	int binaryArr[10];
	int binaryCnt;

	for(binaryCnt=0; num; binaryCnt++){
		binaryArr[binaryCnt] = num%2;
		num = num/2;
	}

	for(int i=binaryCnt-1; i>=0; i--){
		printf("%d ",binaryArr[i]);
	}
	return;
}


int main(void){
	
	int num;

	printf("10진수 정수를 입력받아 2진수로 변환해서 출력하는 프로그램 \n");
	printf("10진수 정수를 입력: ");
	scanf("%d",&num);
	
	intoBinaryNum(num);

}

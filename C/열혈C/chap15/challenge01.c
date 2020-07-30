#include <stdio.h>

void oddNum(int arr[]){

	printf("홀수 출력: ");
	
	for(int i=0; i<10; i++)
		if(arr[i]%2 != 0)
			printf("%d, ",arr[i]);

	return;
}


void evenNum(int arr[]){
	
	printf("짝수 출력: ");
	for(int i=0; i<10; i++)
		if(arr[i]%2 == 0)
			printf("%d, ",arr[i]);
	
	return;
	
}

int main(void){
	int arr[10];
	int num;
	printf("10개의 숫자를 입력받아 홀수와 짝수로 구분하여 출력하는 프로그램 \n");
	printf("10개의 숫자 입력: ");
	for(int i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}

	oddNum(arr);
	printf("\n");
	evenNum(arr);
	//printf("\n");

	return 0;

}
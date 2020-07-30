#include <stdio.h>


int main(void){
	int arr[10];
	int num;
	int oddCnt=0;
	int evenCnt=9;

	printf("10개의 정수를 입력받아서 배열의 앞에는 홀수, 배열의 뒤에는 짝수를 저장해서 출력하는 프로그램 \n");
	printf("10개의 정수 입력 \n");
	
	for(int i=0; i<10; i++){
		printf("입력: ");
		scanf("%d",&num);

		if(num%2 != 0){
			arr[oddCnt++]=num;
		}else{
			arr[evenCnt--]=num;
		}	

	}
	printf("배열 요소의 출력: ");
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}

	return 0;

}


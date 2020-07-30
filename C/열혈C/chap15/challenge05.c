#include <stdio.h>

void desSort(int arr[], int len){
	
	int temp;

	for(int i=0; i<len-1; i++){
		for(int j=0; j<len-1-i; j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0; i<len; i++){
		printf("%d ",arr[i]);
	}
	return;
}



int main(void){
	int arr[7];

	printf("7개의 정수를 입력받아 버블 정렬 알고리즘으로 내림차순으로 출력하는 프로그램 \n");
	printf("7개의 정수 입력: ");
	for(int i=0; i<7; i++){
		scanf("%d",&arr[i]);
	}
	
	desSort(arr,7);
	return 0;
}
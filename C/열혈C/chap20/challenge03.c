#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("난수의 범위: 0부터 99까지 \n");
	for(int i=0; i<50; i++){
		printf("난수 출력: %d \n", (rand()%100));
	}

	return 0;




}

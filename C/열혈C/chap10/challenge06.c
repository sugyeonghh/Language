// challenge06. 초(second)를 입력받아 [시,분,초]의 형태로 출력하는 프로그램

#include <stdio.h>

int main(){
	int second=0;

	printf("초(second)를 입력받아 [시,분,초]의 형태로 출력 \n");
	printf("초(second) 입력: ");
	scanf("%d", &second);
	
	int s = second % 60;
	int m = second / 60 % 60;
	int h = second / 60 / 60; 	

	printf("[h: %d, m: %d, s: %d] \n", h,m,s);
	
}

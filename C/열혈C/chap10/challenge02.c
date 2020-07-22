// 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램
// ex) input: 3,5 -> 3단, 4단, 5단
// 조건: 입력 순서에 있어서 자유로워야 함

#include <stdio.h>

void gugudan(int num1, int num2){
	if(num1<=num2){
		while((num2-num1 >= 0)){
			for(int i=1; i<10; i++)
				printf("%d x %d = %d \n",num1, i, num1*i);
			num1++;
			printf("\n");
		}
	}else{
		while(num1-num2 >= 0){
			for(int i=1; i<10; i++)
				printf("%d x %d = %d \n",num2, i, num1*i);
			num2++;
			printf("\n");
		}
	}
}

int main(void){
	int num1=0, num2=0;	

	printf("구구단 프로그램 \n");
	printf("두 숫자를 입력하세요: ");
	scanf("%d %d",&num1,&num2);

	printf("입력한 숫자: %d, %d \n",num1, num2);
	
	printf("[구구단] \n");
	gugudan(num1,num2);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

void palindrome(char input[]){
	int size = strlen(input);

	for(int i=0; i<=(size-1)/2; i++){

		if(input[i]==input[size-1-i]){
			continue;
		}else{
			printf("회문이 아닙니다. \n");
			return;
		}
	}
	printf("회문 입니다. \n");
	return;
	
}


int main(void){
	char input[10];
	
	printf("회문 판단 프로그램 \n");
	printf("문자열 입력: ");
	gets(input);
	palindrome(input);


}

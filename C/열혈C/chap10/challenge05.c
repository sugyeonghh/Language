// challenge05. 10개의 소수(prime number)를 출력하는 프로그램


#include <stdio.h>

int main(){
	int count = 1;
	int num = 2;
	int primeNum = num;
	int flag = 1;

	while(1){
		if(num!=2){
			for(int i=2;i<num;i++){
				if(num%i == 0){
					flag = 0;
					break;
				}else{
					flag = 1;
					primeNum = num;
				}
			}
		}
		num++;
		if(flag){		
			printf("%d ",primeNum);
			count++;
		}

		if(count>10)
			break;
	}

}
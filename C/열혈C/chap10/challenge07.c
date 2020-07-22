// challenge07. n값을 입력받고 2^k <= n을 만족하는 k의 최대값을 출력하는 프로그램

#include <stdio.h>

int recursiveMultiple(int num){
	if(num!=0){
		return 2*recursiveMultiple(num-1);
	}else{
		return 1;
	}
}

int main(){
	int n;
	int k=1;
	int result;

	printf("n값을 입력받고 2^k <= n을 만족하는 k의 최대값을 출력하는 프로그램 \n");
	printf("n값 입력: ");
	scanf("%d",&n);
	
	
	while(1){
		result = recursiveMultiple(k);	
		if(result>n){
			k--;
			break;
		}
		k++;
	}
	
	printf("공식을 만족하는 k의 최대값: %d \n", k);

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	
	int player[3];
	int computer[3];
	int strike=0, ball=0;
	srand((int)time(NULL));
		
	printf("야구게임 \n");
	for(int i=0; i<3; i++)
		computer[i]=rand()%10;
	
	for(int i=0; i<3; i++)
		printf("%d",computer[i]);
	printf("\n");

	while(strike!=3){
		strike=0, ball=0;
		printf("3개의 숫자 선택: ");
		for(int i=0; i<3; i++)
			scanf("%d",&player[i]);	
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){	
				if((player[i]==computer[j]) && i==j){
					strike++;
				}else if(player[i]==computer[j] && i!=j){
					ball++;
				}else{
					continue;
				}
			}
		}
		printf("%d strike, %d ball \n",strike, ball);

	}


	return 0;


}

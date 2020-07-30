#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	int select;
	int win=0, draw=0, lose=0;
	srand((int)time(NULL));

	while(!lose){
		
		printf("바위: 1, 가위: 2, 보: 3, 선택>  ");
		scanf("%d", &select);
		int random = rand()%3+1;	
		switch(select){
		case 1:
			printf("당신은 바위 선택, 컴퓨터는 ");
			if(random==1){
				printf("바위 선택, 비겼습니다! \n");
				draw++;
			}else if(random==2){
				printf("가위 선택, 이겼습니다! \n");
				win++;
			}else{
				printf("보 선택, 졌습니다! \n");
				lose++;
			}
			break;

		case 2:
			printf("당신은 가위 선택, 컴퓨터는 ");
			if(random==1){
				printf("바위 선택, 졌습니다! \n");
				lose++; 
			}else if(random==2){
				printf("가위 선택, 비겼습니다! \n");
				draw++;
			}else{
				printf("보 선택, 이겼습니다! \n");
				win++;
			}
			break;

		case 3:
			printf("당신은 보 선택, 컴퓨터는 ");
			if(random==1){
				printf("바위 선택, 이겼습니다! \n");
				win++; 
			}else if(random==2){
				printf("가위 선택, 졌습니다! \n");
				lose++;
			}else{
				printf("보 선택, 비겼습니다! \n");
				draw++;
			}
			break;
	
		default:
			printf("error! \n");
			break;

		}
	}
	printf("%d승 %d무\n",win,draw);
}

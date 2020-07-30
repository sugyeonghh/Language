#include <stdio.h>



int main(void){
	int temp[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16} };

	int ary[4][4];
	
	
	for(int n=0; n<4; n++){
		for(int i=0; i<4; i++){
			for(int j=0; j<4; j++){
				ary[i][j]=temp[i][j];	
			}
		}

		for(int i=0; i<4; i++){
			for(int j=0; j<4; j++){
				printf("%3d",ary[i][j]);
				temp[j][3-i]= ary[i][j];
			}
			printf("\n");
		}
		printf("\n");

	}

}

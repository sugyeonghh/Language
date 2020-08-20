#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[10];
    char tel[20];
} Facebook;

typedef struct{
    Facebook *p;
} pFacebook;

int main(void){
    printf("전화번호 관리 프로그램 \n");
    
    int i=0;

    while(1){
        printf("\n***** MENU ***** \n");
        printf("1. Insert \n2. Delete \n3. Search \n4. Print All \n5. Exit \n");
        printf("Choose the item: ");
        int choice;
        scanf("%d", &choice);
        printf("\n");

        switch(choice){
        case 1:
            printf("[ INSERT ] \n");
            facebook[i] = (Facebook *)malloc(sizeof(Facebook));

            printf("Input Name: "); scanf("%s",facebook[i]->name);
            printf("Input Tel Number: "); scanf(" %[^\n]",facebook[i]->tel);
            i++;
            break;
        
        case 2:
            printf("[ DELETE ] \n");
            char delete[10];
            printf("Name to Delete: "); scanf("%s", delete);
            for(int k=0; k<i; k++){
                if(strcmp(facebook[k]->name,delete)==0)
                    facebook[k]=NULL;
            }
            break;
        
        case 3:
            printf("[ SEARCH ] \n");
            char search[10];
            int flag=1;
            printf("Name to Search: "); scanf("%s", search);
            for(int k=0; k<i; k++){
                if(strcmp(facebook[k]->name,search)==0){
                    printf("Name: %s, Tel: %s \n", facebook[k]->name, facebook[k]->tel);
                    flag = 0;
                    break;
                }
            }
            if(flag)
                printf("can not found! \n");

            break;

        case 4:
            printf("[ PRINT ALL ] \n");
            for(int k=0; k<i; k++)
                printf("%d. Name: %s, Tel: %s \n", k+1, facebook[k]->name, facebook[k]->tel);
            break;
        
        case 5: 
            printf("Exit \n");
            return 0;

        default:
            printf("error! \n");
            break;
        }
    }
}
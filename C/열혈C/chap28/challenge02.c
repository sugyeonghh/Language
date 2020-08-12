#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char author[10];
    char title[30];
    int page;
}Book;


int main(void){
    printf("3권의 도서 정보를 입력받고 출력하는 프로그램 \n");
    Book *pbook[3];

    printf("도서 정보 입력 \n");
    for(int i=0; i<3; i++){
        pbook[i] = (Book *)malloc(sizeof(Book));
        printf("저자: "); scanf("%s",pbook[i]->author); 
        printf("제목: "); scanf(" %[^\n]",pbook[i]->title); 
        printf("페이지 수: "); scanf("%d",&pbook[i]->page); 
        printf("\n");
    }
    printf("\n");
    printf("도서 정보 출력 \n");
    for(int i=0; i<3; i++){
        printf("book %d \n",i+1);
        printf("저자: %s \n",pbook[i]->author);
        printf("제목: %s \n",pbook[i]->title);
        printf("페이지 수: %d \n",pbook[i]->page);
        printf("\n");
    }
}
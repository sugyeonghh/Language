#include <stdio.h>

struct book {
    char author[10];
    char title[30];
    int page;
};


int main(void){
    printf("3권의 도서 정보를 입력받고 출력하는 프로그램 \n");
    struct book book[3];

    printf("도서 정보 입력 \n");
    for(int i=0; i<3; i++){
        printf("저자: "); scanf("%s",book[i].author); 
        printf("제목: "); scanf(" %[^\n]",book[i].title); 
        printf("페이지 수: "); scanf("%d",&book[i].page); 
        printf("\n");
    }
    printf("\n");
    printf("도서 정보 출력 \n");
    for(int i=0; i<3; i++){
        printf("book %d \n",i+1);
        printf("저자: %s \n",book[i].author);
        printf("제목: %s \n",book[i].title);
        printf("페이지 수: %d \n",book[i].page);
        printf("\n");
    }
}
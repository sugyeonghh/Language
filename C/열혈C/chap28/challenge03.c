#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} ComplexNum;

int main(void){
    printf("두 개의 복소수 정보를 입력받아 두 복소수의 덧셈과 곱셈의 결과를 출력하는 프로그램 \n");

    ComplexNum comNum1;
    ComplexNum comNum2;

    printf("복소수 입력1: ");
    scanf("%lf %lf", &comNum1.real, &comNum1.imaginary);
    printf("복소수 입력2: ");
    scanf("%lf %lf", &comNum2.real, &comNum2.imaginary);

    printf("합의 결과] 실수: %lf, 허수: %lf \n", comNum1.real+comNum2.real, comNum1.imaginary+comNum2.imaginary);
    printf("곱의 결과] 실수: %lf, 허수: %lf \n", comNum1.real*comNum2.real-comNum1.imaginary*comNum2.imaginary, comNum1.imaginary*comNum2.real+comNum2.real*comNum1.imaginary);
}
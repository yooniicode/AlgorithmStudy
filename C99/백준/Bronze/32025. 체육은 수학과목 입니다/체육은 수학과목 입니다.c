#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    num1*=50;
    num2*=50;// 표준 입력을 받아서 변수에 저장

    if (num1 >= num2){
        printf("%d", num2);
    }    // 변수의 내용을 출력
    else printf("%d", num1);
    return 0;
}
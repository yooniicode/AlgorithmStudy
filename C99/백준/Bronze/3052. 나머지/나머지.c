#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main(){
    int a[10], b[42]={0}, num=0;
    for (int i=0; i<10; ++i) {
        scanf("%d", &a[i]);
        b[(a[i]%42)] += 1;
    }

    for(int i=0;i<42;i++){
        if (b[i]!=0){
            num+=1;
        }
    }
    printf("%d", num);
    return 0;
}

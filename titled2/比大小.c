//
// Created by ROG on 2024/9/6.
//
#include<stdio.h>
#include<windows.system.h>
int main() {
//    system("chcp 65001");
    int a,b,c;
    printf("ÇëÊäÈëa,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    int max;

    if(a>b) {
        if (a>c) {
            max = a;
        }
        else
            max = c;
    }

    else {
        if (b>c)
            max = b;
        else
            max = c;

    }

    printf("%d",max);


}

//
// Created by ROG on 2024/9/6.
//
#include<stdio.h>
#include<windows.system.h>

int main() {
    // system("chcp 65001");
    int type;
    scanf("%d",&type);

    switch(type) {
        case 1:
            printf("你好");
            break;
        case 2:
            printf("早上好");
            break;
        case 3:
            printf("中上好");
            break;
        case 4:
            printf("晚上好");
        default:
            printf("再见");
            break;
    }
}

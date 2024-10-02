//
// Created by ROG on 24-9-4.
//
#include<stdio.h>
#include<windows.system.h>
int main(){
    system("chcp 65001");
    int price;
    int bill = 0;
    printf("请输入金额:\n");
    scanf("%d",&price);
    printf("请输入票面:\n");
    scanf("%d",&bill);
    if(bill > price){
        printf("找零：%d",bill - price);
    }


}





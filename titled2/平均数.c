#include <stdio.h>

int main() {
    int sum = 0;
    int number = 0;
    int count = 0;

    printf("请输入需要数字： ");
    scanf("%d", &number);
    while (number!=-1){
        sum += number;
        count+=1;
        printf("请输入需要数字： ");
        scanf("%d", &number);
    }
    // printf("%d",n);
    printf("平均数为:%f",1.0*sum/count);
}
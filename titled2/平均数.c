#include <stdio.h>

int main() {
    int sum = 0;
    int number = 0;
    int count = 0;

    printf("��������Ҫ���֣� ");
    scanf("%d", &number);
    while (number!=-1){
        sum += number;
        count+=1;
        printf("��������Ҫ���֣� ");
        scanf("%d", &number);
    }
    // printf("%d",n);
    printf("ƽ����Ϊ:%f",1.0*sum/count);
}
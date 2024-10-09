//
// Created by ROG on 2024/10/8.
//
#include <stdio.h>
#define N 10
int main() {
    int a[N],i;
    printf("Enter %d numbers:",N);
    for (i = 0;i < N;i++) {
        scanf("%d",&a[i]);
    }
    printf("The reverse order:");
    for(i = N -1;i >= 0;i--) {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;

}
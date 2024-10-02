#include<stdio.h>

int main(){
    double input;
    int a ,c;
    double b;
    char carr[20];
    int i = 0;
    do{
        printf("The munber is:");
        scanf("%lf",&input);
        if(input < 0 || input > 1000){
            printf("Error.\n");}
    }
    while (input >= 0 && input <= 1000);

    a=(int) input;
    a=(double)a;
    b=input - a;
    printf("%x.",a);
    while (i<6 && b!=0){
        b*=16;
        c= (int)b;
        b-=c;
        i++;
        printf ("%x",c);
    }
    return 0;
}
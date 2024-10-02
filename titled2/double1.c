#include <stdio.h>
#include <stdlib.h>

int main() {
    double input;
    int a;
    double b;
    char c[20];
    int i = 0;

    do {
        printf("The number is: ");
        scanf("%lf", &input);
        if (input < 0 || input > 1000) {
            printf("Error.\n");

        }
    } while (input < 0 || input > 1000);



    a = (int)input;
    b = input - a;




    printf("%X.", a);
    if(b==0.0) {
        printf("000000");
    }

    int n =0;
    while (i < 6 && b != 0) {
        b *= 16;
        int c = (int)b;
        b -= c;
        printf("%X", c);
        i++;
        n++;
    }
    if(n<6) {
        n =6-n;
        for(i=0;i<n;i++) {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}

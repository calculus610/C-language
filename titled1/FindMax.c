#include<stdio.h>
#include<limits.h>
#include <stdint.h>

int findMax(int n1, int n2) {
    int c = INT_MIN;
    int d = INT_MIN;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++) {
        if(arr1[i]<0 && arr1[i]>c) {
            c=arr1[i];
        }
    }
    for(int i=0;i<n2;i++) {
        if(arr2[i]<0 && arr1[i]>d) {
            d=arr2[i];
        }

    }
    printf("%d",c);
    printf("%d",d);
}


int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    findMax(n1,n2);

}
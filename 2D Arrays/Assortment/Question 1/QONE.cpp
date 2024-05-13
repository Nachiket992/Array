#include <stdio.h>

int main() {
    int n;
    printf("Enter the array's size :- ");
    scanf("%d", &n);
    int a[n];
    for(int e=0; e<n; e++) {
        printf("a[%d] = ");
        scanf("%d", &a[e]);
    }
    printf("\nNegative elements from an array :- ");
    for(int d=0; d<n; d++) {
        if(a[d]<0) {
            printf("%d, ", a[d]);
        }
    }
}
#include <stdio.h>

int main() {
    int s, i, n;
    printf("Enter the array's row & column size :- ");
    scanf("%d", &s);
    i=s;
    n=s;
    int a[i][n];
    for(int e=0; e<i; e++) {
        for(int f=0; f<n; f++) {
            printf("a[%d][%d] = ", e, f);
            scanf("%d", &a[e][f]);
        }
    }
    pritnf("The transpose matrix of an array :-\n\n");
    for(int q=0; q<i; q++) {
        for(int w=0; w<n; w++) {
            printf("%d ", a[w][q]);
        }
        printf("\n");
    } 
}
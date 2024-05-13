#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the array's row size :- ");
    scanf("%d", &i);
    printf("Enter the array's column size :- ");
    scanf("%d", &n);
    int a[i][n];
    printf("\nEnter array A's elements :-\n\n");
    for(int j=0; j<i; j++) {
        for(int k=0; k<n; k++) {
            printf("a[%d][%d] = ", j, k);
            scanf("%d", &a[j][k]);
        }
    }
    int b[i][n];
    printf("\nEnter array B's elements :-\n\n");
    for(int v=0; v<i; v++) {
        for(int m=0; m<n; m++) {
            printf("b[%d][%d] = ", v, m);
            scanf("%d", &b[v][m]);
        }
    }
    int c[i][n];
    printf("\nArra C is :-\n");
    for(int r=0; r<i; r++) {
        for(int d=0; d<n; d++) {
            c[r][d]=a[r][d]+b[r][d];
        }
    }
    for(int f=0; f<i; f++) {
        for(int g=0; g<n; g++) {
            printf("%d ", c[f][g]);
        }
        printf("\n");
    }
}
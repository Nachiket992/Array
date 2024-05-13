#include <stdio.h>

int main() {
    int i, n, sum;
    printf("Enter the array's row size :- ");
    scanf("%d", &i);
    printf("Enter the array's column size :- ");
    scanf("%d", &n);
    int a[i][n];
    printf("\nEnter array's elements :-\n\n");
    for(int j=0; j<i; j++) {
        for(int k=0; k<n; k++) {
            printf("a[%d][%d] = ", j, k);
            scanf("%d", &a[j][k]);
        }
    }
    for(int k=0; k<i; k++) {
        for(int l=0; l<n; l++) {
            if(k==l) {
                sum+=a[k][l];
            }
        }
    }
    printf("\nThe sum of diangonal elements :- %d", sum);
}
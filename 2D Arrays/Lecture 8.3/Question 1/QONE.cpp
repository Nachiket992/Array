#include <stdio.h>

int main() {
    int i, n, sum=0, count=0;
    float average;
    printf("Enter the array's row size :- ");
    scanf("%d", &i);
    printf("Enter the array's column size :- ");
    scanf("%d", &n);
    int a[i][n];
    for(int j=0; j<i; j++) {
        for(int k=0; k<n; k++) {
            printf("a[%d][%d] = ", j, k);
            scanf("%d", &a[j][k]);
            sum+=a[j][k];
            count++;
        }
    }
    average=sum/count;
    printf("\nAvearge of an Array is :- %.2f", average);
}
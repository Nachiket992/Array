#include<stdio.h>

int main() {
	
	int size;
	
	printf("This is a program to  perform the addition operation of two 1D array & store in another array.\n\n");
	printf("Enter array size :- ");
	scanf("%d", &size);
	int a[size];
	int b[size];
	int c[size];
	printf("\nEnter array A's elements :-\n\n");
	for(int d=0; d<size; d++) {
		printf("a[%d] = ", d);
		scanf("%d", &a[d]);
	}
	printf("\nEnter array b's elements :-\n\n");
	for(int d=0; d<size; d++) {
		printf("a[%d] = ", d);
		scanf("%d", &b[d]);
	}
	printf("\nArray C is :- ");
	for(int d=0; d<size; d++) {
		c[d]=a[d]+b[d];
	}
	for(int d=0; d<size; d++) {
		printf("%d ", c[d]);
	}
	
}
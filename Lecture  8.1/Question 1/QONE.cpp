#include<stdio.h>

int main() {
	
	int size,y;
	
	printf("This is a program to find the lenth of a 1D array.\n\n");
	
	printf("Enter the array size: ");
	scanf("%d", &size);
	
	int lenth[size];
	int as=sizeof(lenth)/sizeof(lenth[0]);
	
	printf("\nEnter array elements:\n\n");
	
	for(y=0; y<size; y++) {
		printf("a[%d] = ", y);
		scanf(" %d", &lenth[y]);	
	}
	
	printf("\nLenth of an Array :- %d", as);
	
}
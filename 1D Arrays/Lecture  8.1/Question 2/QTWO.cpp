#include<stdio.h>

int main() {
	
	int size,sum=0;
	float average;
	printf("This is a program to find the average of a 1D array. \n\n");
	printf("Enter array size :- ");
	scanf("%d", &size);
	int a[size];
	printf("\nEnter array elements :-\n\n");
	for(int y=0; y<size; y++) {
		printf("a[%d] = ", y);
		scanf("%d", &a[y]);
		sum = sum + a[y];
	}
	printf("sum = %d\t", sum/size);
	
	average=sum/size;
	printf("\nAverage of an array is :- %f", average);
	
	
}
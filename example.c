//Example
#include <stdio.h>
#include <stdlib.h>
#include "ithSmallestNumber.h"

int main(void){
	int n, i;
	printf("Enter how many elements do you want to enter : ");
	scanf("%d", &n);
	int *a = (int *) malloc(n*sizeof(int));
	printf("Enter %d elements : ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter which ith smallest number do you want to find : ");
	scanf("%d", &i);
	printf("%d", ithSmallestNumber(a, 0, n-1, i));
	return 0;
}
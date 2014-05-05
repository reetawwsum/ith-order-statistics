/**************************************************************/
/**********************ith Smallest Number*********************/
/**************************************************************/
//Helping function
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int p, int q){
	int j;
	int x = a[p];
	int i = p;
	for (j = p+1; j <= q; j++){
		if (a[j] <= x){
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[p], &a[i]);
	return i;
}

//ith Smallest Number
int ithSmallestNumber(int *a, int p, int q, int i){
	if (p == q)
		return a[p];
	int r = partition(a, p, q);
	int k = r - p + 1;
	if (i == k)
		return a[r];
	if (i < k)
		return ithSmallestNumber(a, p, r-1, i);
	else
		return ithSmallestNumber(a, r+1, q, i-k);
}

/*************************************************************/
/*************************************************************/
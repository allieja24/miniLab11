#include<stdio.h>

void sum(int *array)
{
	int sum_array = 0;
	int i = 0;
	int sum[12];
	
	sum[0] = array[0];
	printf("%d ", *(array));

	for(i = 1; i < 12; i++){
		sum[i] = sum[i-1] + *(array + i);
    	printf("%d ", sum[i]);
	}	
}

int main()
{
	int array[12];
	int i;

	for(i = 0; i < 12; i++){
		array[i] = i;
		printf("%d ", array[i]);
	}
    printf("\n");
	sum(array);
	return 0;
}

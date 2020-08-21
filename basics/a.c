#include <stdio.h>
	


int main(void) 
{
    static int a[5];
	int b[5] = {0};
	int c[5] = {0,0,0,0,0};

	int i; //for loop counter

	//printing all alements of all arrays
	printf("\nArray a:\n");
	for( i=0; i<5; i++ )
		printf("arr[%d]: %d\n",i,a[i]);
	
	
	return 0;
}
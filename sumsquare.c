#include <stdio.h>
 
int main(void) {
    
	int N, i;
	printf("Enter array size:");
	scanf("%d", &N);
 	int numArray[N]; // Define an array of four integers
    // Get inputs for the array elements
	for (i=0;i<N; i++) {
	printf("Enter the elements:");
    	scanf("%d", &numArray[i]);
	}
	int sum = 0;
	for (i=0;i<N;i++)
	sum+=numArray[i]*numArray[i];// Write here the logic to add these integers:
    	printf("%d\n",sum);  // Print the sum
   	return 0;
}

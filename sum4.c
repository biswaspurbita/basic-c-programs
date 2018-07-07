#include <stdio.h>
 
int main(void) {
	
	int numArray[4];   // Define an array of four integers
        int i;
	// Get inputs for the array elements
	for (i=0; i<4; i++) {
	printf("Enter 4 numbers\n");
    	scanf("%d", &numArray[i]);
	}
    
	int sum = 0;
	for (i=0;i<4;i++)
    sum= sum + numArray[i];	// Write the logic to add these integers here:
 
 
    
	
	printf("%d\n",sum);   // Print the sum
    
	return 0;
}

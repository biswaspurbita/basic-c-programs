#include <stdio.h>

int main(void) {
    int N, i;
    printf("Enter size of array:");
    scanf("%d", &N);
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];
    for(i=0;i<N;i++) sumArray[i]=0;
    // Get the numArrayA
    for (i=0; i<N; i++) {
	printf("Enter 1st array:");
        scanf("%d", &numArrayA[i]);
    }
    // Get the numArrayB
    for (i=0; i<N; i++) {
	printf("Enter 2nd array:");
        scanf("%d", &numArrayB[i]);
    }
    // Write your logic here:
    for(i=0;i<N;i++)
    sumArray[i]= numArrayA[i] + numArrayB[i];
    // Print the sumArray
    for (i=0; i<N; i++) {
	printf("The sum is:");
        printf("%d ", sumArray[i]);
    }
    printf("\n");
    return 0;
}

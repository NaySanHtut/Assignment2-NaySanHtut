#include <stdio.h>
#include "output_array.h"

void outputArray(double *arr, int size) {
	for (int i = 0; i < size; i++) {
		if (i < 1) {
			printf("%.2f\n", arr[i]); // prints the first value without spaces
		}
		else {
			printf("                          %.2f\n", arr[i]); // prints the value in 2 dp and also prints it with a new line for array
		}
	}
}

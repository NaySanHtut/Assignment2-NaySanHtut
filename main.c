#include <stdio.h>
#include "statistics.h"
#include "output_array.h"
#define MAX_SIZE 100 // setting max size for array

int readArray(double arr[], int max_size, int arrNum) {
    int size; // initializing size

    printf("\nPlease enter the size for array %d (max %d): ", arrNum, max_size);
    while (scanf("%d", &size) != 1 || size <= 0 || size > max_size) { // while loop to repeat warning and retry input if the input is unexpected value
        printf("Invalid input. Enter a number between 1 and %d: ", max_size); // warning message
        while (getchar() != '\n'); // this clears the bad inputs
    }

    for (int i = 0; i < size; i++) {
        printf("Enter value %d for array %d: ", i + 1, arrNum);
        while (scanf("%lf", (arr + i)) != 1) { // number validity check
            printf("Please enter a valid number: "); // number validity warning
            while (getchar() != '\n'); // this clears the bad inputs
        }
    }

    return size;
}

void printResults(double *arr, int size, int arrNum) { // prints out the results for each array
    double sum = arrSum(arr, size);
    double avg = arrAvg(arr, size);
    double std = arrStdDev(arr, size);
    double max = arrMax(arr, size);
    double min = arrMin(arr, size);
    double range = arrRange(arr, size);

    printf("The array for Array %d is: ", arrNum);
    outputArray(arr, size); // this does the printing
    
    printf("The average is: %.2f\n", avg);
    printf("The std is: %.2f\n", std);
    printf("The sum is: %.2f\n", sum);
    printf("The max is: %.2f\n", max);
    printf("The min is: %.2f\n", min);
    printf("The range is: %.2f\n\n", range);
}


int main(void)
{ 
    double arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE]; // setting up arrays
    int size1, size2, size3; // initializing sizes
    
    // calling read function for each of the 3 arrays
    size1 = readArray(arr1, MAX_SIZE, 1);
    size2 = readArray(arr2, MAX_SIZE, 2);
    size3 = readArray(arr3, MAX_SIZE, 3);

    printf("\n"); // new line

    printResults(arr1, size1, 1);
    printResults(arr2, size2, 2);
    printResults(arr3, size3, 3);

    return 0;
}


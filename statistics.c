#include <math.h>
#include "statistics.h"

double arrSum(double *arr, int size) { // summing the values pointed to by arr
    double total = 0.0; // initialize total
    for (int i = 0; i < size; i++) {
        total += arr[i]; // simple adding + storing
    }   
    
    return total;
}

double arrAvg(double *arr, int size) {
    return (arrSum(arr, size) / size); // simple return
}

double arrStdDev(double *arr, int size) {
    double avg = arrAvg(arr, size); // initializing the mean aka average
    double sumSqDiff = 0.0; // the total aka sum of all the squared differences: (x - mu)^2

    for (int i = 0; i < size; i++) {
        double diff = arr[i] - avg; // the (x - mu) part
        sumSqDiff += diff * diff; // (x - mu) squared
    }

    return sqrt(sumSqDiff / (size - 1)); // divides by n aka size and square roots it (sqrt)
}

double arrMax(double *arr, int size) {
	double maxValue = arr[0]; // assume max value is array index 0

	for (int i = 1; i < size; i++) { // comparison using for loop to sift through the array
		if (arr[i] > maxValue) { // I did int i = 1 cuz arr[0] is already done for maxValue
			maxValue = arr[i];
		}
	}
	return maxValue; // returns value aka the value of the indexed array
}

double arrMin(double *arr, int size) {
	double minValue = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	return minValue;
}

double arrRange(double *arr, int size) {
	double max = arrMax(arr, size);
	double min = arrMin(arr, size);

	return max - min; // this is the range calculation
}

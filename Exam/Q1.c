#include <stdio.h>

void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int findMax(int arr[], int n);
int findMin(int arr[], int n);
int calculateSum(int arr[], int n);
float calculateAverage(int arr[], int n);

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);

    printf("Array elements: ");
    displayArray(arr, n);

    int max = findMax(arr, n);
    printf("Maximum element: %d\n", max);

    int min = findMin(arr, n);
    printf("Minimum element: %d\n", min);

    int sum = calculateSum(arr, n);
    printf("Sum of array elements: %d\n", sum);

    float average = calculateAverage(arr, n);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

void inputArray(int arr[], int n) {

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
}

void displayArray(int arr[], int n) {

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);

    printf("\n");
}

int findMax(int arr[], int n) {

    int max = arr[0];

    for (int i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i];
        
    return max;
}

int findMin(int arr[], int n) {

    int min = arr[0];
    
    for (int i = 1; i < n; i++) 
        if (arr[i] < min) 
            min = arr[i];
    
    return min;
}

int calculateSum(int arr[], int n) {
    
    int sum = 0;

    for (int i = 0; i < n; i++) 
        sum += arr[i];

    return sum;
}

float calculateAverage(int arr[], int n) {

    int sum = calculateSum(arr, n);
    
    return (float) sum / n;

}
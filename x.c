#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Invalid input: Array should have at least two elements.\n");
        return INT_MIN;
    }
    
    int first = arr[0];
    int second = INT_MIN;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
        return INT_MIN;
    }
    
    return second;
}

int main() {
    int num_of_integers;
    int array[1000];
    
    if (scanf("%d", &num_of_integers) != 1 || num_of_integers <= 0 || num_of_integers > 1000) {
        printf("Error reading number of integers.\n");
        return 1;
    }
    
    for (int i = 0; i < num_of_integers; i++) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Error reading integer.\n");
            return 1;
        }
    }
    
    int result = secondLargest(array, num_of_integers);
    if (result != INT_MIN) {
        printf("The second largest element is: %d\n", result);
    }
    
    return 0;
}
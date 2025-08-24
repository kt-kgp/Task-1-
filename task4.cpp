#include <stdio.h>
#include <stdlib.h>

int findLargest(int arr[], int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* numbers = (int*)malloc(size * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int largest = findLargest(numbers, size);

    printf("The largest number in the array is: %d\n", largest);

    free(numbers);

    return 0;
}

int findLargest(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

#include <stdio.h>
#include <stdlib.h>

int binary_search2(int *array, int left, int right, int value);

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    if (array[0] == value)
        return 0;

    int bound = 1;
    while (bound < size && array[bound] <= value) {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    int left = bound / 2;
    int right = (bound < size) ? bound : (int)size - 1;

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    return binary_search2(array, left, right, value);
}

int binary_search2(int *array, int left, int right, int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}


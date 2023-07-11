#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int target) {
    int step = sqrt(n);
    int prev = 0;

    // Finding the block where the target may reside
    while (arr[(int)fmin(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
		printf("prev = %d\n", prev);
        if (prev >= n) {
			printf("breaking\n");
            break;
        }
    }

    // Performing a linear search within the identified block
    while (arr[prev] < target) {
        prev++;
        if (prev == fmin(step, n)) {
            break;
        }
    }

    // If the target element is found
    if (arr[prev] == target) {
        return prev;
    }

    return -1;  // Target element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 19;

    int index = jumpSearch(arr, n, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}


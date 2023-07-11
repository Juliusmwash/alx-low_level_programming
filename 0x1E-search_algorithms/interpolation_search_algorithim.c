#include <stdio.h>

int interpolationSearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            if (arr[low] == target)
                return low;
            return -1;
        }

        int position = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));

        if (arr[position] == target)
            return position;

        if (arr[position] < target)
            low = position + 1;
        else
            high = position - 1;
    }

    return -1;
}

void print_arr(int *arr, int size)
{
    printf("int arr[] = {");
    for (int i = 0; i < size; i++)
    {
		if (i != size - 1)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
    }
    printf("}\n");
}

int main() {
    int arr[] = {2, 8, 20, 27, 31, 43, 47, 50, 54, 65, 78, 99, 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 47;

    int result = interpolationSearch(arr, n, target);
	print_arr(arr, n);
	printf("target = %d\n", target);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}


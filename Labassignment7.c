#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int swaps;
    for (int i = 0; i < n; i++) {
        swaps = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
        printf("Pass #%d : %d\n", i + 1, swaps);
    }
}

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    
    return 0;
}

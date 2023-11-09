#include <stdio.h>

#define N 6

int main() {
    int array[N];

    printf("Enter %d elemens for array: ", N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Array -> ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }

    for (int i = 0; i < N / 2; ++i) {
        int temp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = temp;
    }

    printf("\nOutput -> ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}

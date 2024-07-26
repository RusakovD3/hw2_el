#include <stdio.h>
#include <stdlib.h>

#define N 6

int main() {
    int array[N];

    printf("Enter %d elemens for array: ", N);
    for (int i = 0; i < N; ++i) {
        if (scanf("%d", &array[i]) != 1) {
            perror("Error input");
            exit(EXIT_FAILURE);
        }
    }

    printf("Array -> ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < N / 2; ++i) {
        int temp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = temp;
    }

    printf("Output -> ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    exit(EXIT_SUCCESS);
}

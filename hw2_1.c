#include <stdio.h>
#include <stdlib.h>

#define N 3

int main() {
    int matrix[N][N];

    int val = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = val++;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    exit(EXIT_SUCCESS);
}

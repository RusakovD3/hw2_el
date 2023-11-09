#include <stdio.h>

#define N 7

int main() {
    int matrix[N][N];
    int value = 1;
    int startRow = 0, endRow = N - 1, startCol = 0, endCol = N - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Заполняем верхнюю строку
        for (int i = startCol; i <= endCol; ++i) {
            matrix[startRow][i] = value++;
        }
        startRow++;
        // Заполняем правый столбец
        for (int i = startRow; i <= endRow; ++i) {
            matrix[i][endCol] = value++;
        }
        endCol--;
        // Заполняем нижнюю строку
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; --i) {
                matrix[endRow][i] = value++;
            }
            endRow--;
        }
        // Заполняем левый столбец
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; --i) {
                matrix[i][startCol] = value++;
            }
            startCol++;
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; ++j) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

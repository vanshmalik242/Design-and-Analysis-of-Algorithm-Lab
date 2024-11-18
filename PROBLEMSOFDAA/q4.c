#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c], rowSum[r], colSum[c];

    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            if (i == 0) colSum[j] = 0;
            colSum[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) printf("%d ", rowSum[i]);
    printf("\n");
    for (int j = 0; j < c; j++) printf("%d ", colSum[j]);
    printf("\n");

    return 0;
}

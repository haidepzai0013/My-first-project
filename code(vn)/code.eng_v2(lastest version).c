#include <stdio.h>
int sum(int a, int b, int matrix[a][b], int sumx) {
    sumx = 0;
    for (int m = 0; m < a; m++) {
        for (int n = 0; n < b; n++) {
            sumx += matrix[m][n];
        }
    }
    return sumx;
}
float avg(float avgx, int sumy, int a, int b) {
    avgx = (float)sumy / (a * b);
    return avgx;
}
int main() {
    int c;
    int d;
    int sumz = 0;
    float avgy = 0;
    printf("Enter the values for the matrix rows:  \n");
    scanf("%d", &c);
    while (c <= 0) {
        printf("The values must be natural:  \n");
        scanf("%d", &c);
    }
    printf("Enter the values for the matrix columns;  \n");
    scanf("%d", &d);
    while (d <= 0) {
        printf("The values must be natural");
        scanf("%d", &d);
    }
    int matrix[c][d];
    for (int i = 0; i < c; i++) {
        printf("Enter the matrix values in row %d\n", i);
        for (int j = 0; j < d; j++) {
            printf("Row %d, Column %d:  \n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    sumz = sum(c, d, matrix, sumz);
    avgy = avg(avgy, sumz, c, d);
    printf("The sum of your matrix is: %d\n", sumz);
    printf("The average of your matrix is: %f\n", avgy);
    return 0;
}
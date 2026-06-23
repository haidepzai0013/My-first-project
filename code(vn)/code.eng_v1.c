#include <stdio.h>
int sum(int matrix[3][4], int sumx) {
    for (int m = 0; m < 3; m++) { 
        for (int n = 0; n < 4; n++) { 
            sumx += matrix[m][n]; 
        }
    }   
    return sumx;
}
float avg(int matrix[][4], float avgx, int a, float b) { 
    int sumz = 0;
    avgx = (float)sum(matrix, sumz) / (a * b); 
    return avgx;
}
int main() {
    int c = 0;
    float h = 0.0;
    int matrix[3][4];
    int sumy = 0;
    float avgy = 0; 
    for (int i = 0; i < 3; i++) { 
        c++; 
        for (int j = 0; j < 4; j++) {
            h++; 
            printf("Enter your 3x4 matrix values: \n"); 
            scanf("%d", &matrix[i][j]); 
        } 
    } 
    h = h / c; 
    sumy = sum(matrix, sumy); 
    avgy = avg(matrix, avgy, c, h); 
    printf("The sum of your matrix is: %d\n", sumy); 
    printf("The average of your matrix is: %f\n", avgy);
    return 0;
} 
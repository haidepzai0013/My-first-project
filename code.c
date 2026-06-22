#include <stdio.h>
int tong(int ma_tran[3][4], int tongx) {
    int m;
    int n; 
    for(m = 0; m < 3; m++){
        for(n = 0; n < 4; n++){
            tongx+=ma_tran[m][n];
        }
    } 
    return tongx;
}
float tb_cong(int ma_tran[][4], float tb_congx, int a, float b) {
    int tongz = 0;
    tb_congx = tong(ma_tran, tongz) / (a * b);
    return tb_congx;
}
int main() {
    int c = 0;
    float h = 0.0;
    int ma_tran[3][4];
    int tongy = 0;
    float tb_congy = 0; 
    for (int i = 0; i < 3; i++) { 
        c++; 
        for (int j = 0; j < 4; j++) {
            h++; 
            printf("Nhap gia tri ma tran 3×4 cua ban: \n"); 
            scanf("%d", &ma_tran[i][j]); 
        } 
    } 
    h = h / c; 
    tongy = tong(ma_tran, tongy); 
    tb_congy = tb_cong(ma_tran, tb_congy, c, h); 
    printf("Tong gia tri ma tran cua ban la: %d\n", tongy); 
    printf("TB Cong ma tran cua ban la: %f\n", tb_congy);
    return 0;
} 
#include <stdio.h>
int tong(int a, int b, int ma_tran[a][b], int tongx) { 
    for (int m = 0; m < a; m++) { 
        for (int n = 0; n < b; n++) { 
            tongx += ma_tran[m][n]; 
        }
    }
    return tongx;
}
float tb_cong(float tb_congx, int tongy, int a, int b) { 
    tb_congx = (float)tongy / (a * b); 
    return tb_congx;
}
int main() {
    int p;
    int q;
    int tongy = 0; 
    float tb_congy = 0;
    printf("Nhap gia tri hang ma tran cua ban:  \n");
    scanf("%d", &p);
    printf("Nhap gia tri cot ma tran cua ban:  \n");
    scanf("%d", &q);
    int ma_tran[p][q];
    printf("Nhan Enter: \n"); 
    for (int i = 0; i < p; i++) {
        printf("Nhap gia tri ma tran tai hang %d\n", i);
        for (int j = 0; j < q; j++) {
            printf("Hang %d, Cot %d:  \n", i, j);
            scanf("%d", &ma_tran[i][j]);
        }
    }
    tongy = tong(p, q, ma_tran, tongy); 
    tb_congy = tb_cong(tb_congy, tongy, p, q); 
    printf("Tong gia tri ma tran cua ban la: %d", tongy); 
    printf("TB Cong ma tran cua ban la: %f", tb_congy);
    return 0;
}

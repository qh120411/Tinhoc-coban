#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void nhap(int a[100][100], int m , int n ) {
    int i,j;
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("Nhap vao a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) { 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
// tìm giá trị lớn nhất của ma trận và cho biết vị trí
void maxmtran(int a[100][100], int m , int n) {
    int i,j;
    int max = INT_MIN;
    int cot = -1 ;
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] > max ) {
                max = a[i][j];
                cot = j+1 ;
            }
        }
    }
    printf("Gia tri lon nhat trong ma tran nam o cot %d la : %d",cot,max);
}
//tìm hàng có tổng lớn nhất:)) 
void tonghang(int a[100][100], int m , int n) {
    int i,j;
    int smax=INT_MIN;
    int hang = 0;
    int flag = 0;
    for ( i = 0 ; i < m ; i++ ) {
        int s=0;
            for ( j = 0 ; j < n ; j++ ) {
                if ( a[i][j] > 0 ) {
                    s += a[i][j];
                    flag = 1;
                }
                if ( s > smax ) {
                    smax = s;
                    hang = i+1;
                }
                }
            }
        if ( flag > 0 ) {
        printf("\nHang %d co tong lon nhat la : %d ",hang,smax); 
        }
        else if ( flag == 0 ) {
            printf("\nKhong co phan tu duong trong ma tran");
        }      
}
//tính tích các giá trị dương của ma trận
void tich(int a[100][100], int m , int n) {
    int i,j;
    int s1=1;
    int dem = 0 ;
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] > 0 ) {
                s1 *= a[i][j];
                dem = 1;
            }
        }
    }
    if ( dem > 0 ) {
    printf("\nTich cua cac gia tri duong trong ma tran la : %d",s1); 
    }
    else if ( dem == 0 ) {
        printf("\nMa tran khong co gia tri nao duong");
    }
}

int main() {
    int a[100][100];
    int m,n;
    printf("Nhap vao lan luot so hang so cot cua ma tran : ");
    scanf("%d%d",&m,&n);
    nhap(a,m,n);
    maxmtran(a,m,n);
    tonghang(a,m,n);
    tich(a,m,n);
}
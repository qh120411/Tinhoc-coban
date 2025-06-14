#include<stdio.h>
#include<stdlib.h>

void nhap(int a[100][100], int n, int m) {
    int i,j;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < m ; j++ ) {
            printf("Nhap vao a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < m ; j++ ) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
void tim(int a[100][100], int n, int m){
    int i,j;
    int flag = 0;
    int max = INT_MIN;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < m ; j++ ) {
            if ( a[i][j] < 10 ) {
                if ( a[i][j] > max ) {
                    max = a[i][j];
                    flag = 1;
                }
            }
        }
    }
    if ( flag == 1 ){ 
        printf("Gia tri lon nhat cua cac so nho hon 10 la : %d ",max);
    }
    else if ( flag == 0 ) {
        printf("Khong co so nho hon 10");
    }

}
int tich(int a[100][100], int n, int m) {
    int i,j;
    int tich1=1;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < m ; j++ ) {
            if ( i == j ) {
                tich1 *= a[i][j];
            }
        }
     }
            return tich1;

}
void tb(int a[100], int n, int m) {
    
}

int main() {
    int n,m;
    printf("Nhap vao lan luot hang n cot m : ");
    scanf("%d%d",&n,&m);
    int a[100][100];
    nhap(a,n,m);
    tim(a,n,m);
    printf("\nTich cac phan tu nam tren cac vi tri co so hang bang so cot la : %d ",tich(a,n,m));

}
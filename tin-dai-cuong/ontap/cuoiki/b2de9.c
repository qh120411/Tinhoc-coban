#include<stdio.h>

void nhap(int a[100][100], int m, int n ) {
    int i,j;
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("Nhap vao a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

} 
void tongc(int a[100][100], int m, int n ) {
    int i,j;
    for ( j = 0 ; j < n ; j++ ) {
    int tongcot = 0;
        for ( i = 0 ; i < m ; i++ ) {
            if ( a[i][j] % 2 == 0 ) {
                tongcot+=a[i][j];
                }
            }
        printf("\nGia tri cot %d la : %d ",j+1,tongcot);
    }
}
void check(int a[100][100], int m, int n ) {
    int i,j;
    if ( m == n ) {
    int flag1 = 0;
    int flag2 = 0; 
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( i == j && a[i][j] != 0  ) {
                flag1 = 1;
            }
            if ( i < j && a[i][j] != 0  ) {
                flag2 = 1;
            }
        }
    }
        if ( flag1 == 1 & flag2 == 1) {
            printf("\nDay la ma tran tam giac tren");
        }
        else {
            printf("\nDay khong phai la ma tran tam giac tren");
            }
    } else {
        printf("\n0");
    }
}

void tongh(int a[100][100], int m, int n ) {
    int i,j;
    for ( i = 0 ; i < m ; i++ ) {
        int tonghang = 0;
        for ( j = 0 ; j < n ; j++ ) {
                tonghang+=a[i][j];
            }
        printf("\nGia tri hang %d la : %d ",i+1,tonghang);
    }
}

int main() {
    int a[100][100];
    int m,n;
    printf("Nhap vao hang m cot n : ");
    scanf("%d%d",&m,&n);
    nhap(a,m,n);
    tongc(a,m,n);
    check(a,m,n);
    tongh(a,m,n);
}
#include<stdio.h>

void nx( int a[100][100], int n) {
    int i,j;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("Nhap vao a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
void tich( int a[100][100], int n ) {
    int i,j;
    int s = 1;
    for ( i = 0 ; i < n ; i++ ) {
        if ( i == j ) {
            s*= a[i][j];
        }
    }
    printf("%d",s);
}
void check ( int a[100][100], int n) {
    int i,j;
    int flag1 = 0, flag2 = 0, flag3 = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( i == j && a[i][j] != 0 ) {
                flag1 = 1;
            }
            if ( i < j && a[i][j] != 0 ) {
                flag2 = 1;
            }
            if ( i > j && a[i][j] != 0) {
                flag3 = 1;
            }
        }
    }
    if ( flag1 == 1 && flag2 == 1 && flag3 == 0 ) {
        printf("\nMa tran tren la ma tran tam giac tren");
    }
    else {
        printf("\n0");
    }

}

int main() {
    int a[100][100];
    int n;
    printf("Nhap vao ma tran vuong cap : ");
    scanf("%d",&n);
    nx(a,n);
    tich(a,n);
    check(a,n);
}
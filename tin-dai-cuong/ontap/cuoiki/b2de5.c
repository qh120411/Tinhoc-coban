#include<stdio.h>
#include<limits.h>

void nx(int a[100][100], int n) {
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
int demchan (int a[100][100], int n) {
    int i,j;
    int dem = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] % 2 == 0 ) {
                dem++;
            }
        }
    }
    if ( dem > 0 ) {
        return dem;
    }
    else {
        return 0;
    }
}
void tbc ( int a[100][100], int n) {
    int i,j;
    int s = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( i == j ) {
                s += a[i][j];
            }
        }
    }
    printf("\nTrung binh cong cac phan tu nam tren duong cheo chinh la : %.2f",(float)s/n);
}
void max ( int a[100][100], int n) {
    int i,j;
    int max = INT_MIN;
    int maxi = -1;
    int maxj = -1;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] > max ) {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    printf("\nGia tri lon nhat cua ma tran la : %d tai hang %d cot %d",max,maxi+1,maxj+1);
}

int main() {
    int a[100][100];
    int n;
    printf("Nhap vao ma tran vuong cap : ");
    scanf("%d",&n);
    nx(a,n);
    printf("So phan tu chan trong ma tran la : %d",demchan(a,n));
    tbc(a,n);
    max(a,n);
}
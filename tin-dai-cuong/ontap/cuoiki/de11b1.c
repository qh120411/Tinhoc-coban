#include<stdio.h>
#include<math.h>

void dem ( int a[] , int n){
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    int dem=0;
    for ( i = 0 ; i < n ; i++ ) { 
        if ( a[i] % 2 == 0 ) {
            dem++;
            }
    }
    if ( dem > 0 ) {
        printf("So phan tu chan trong day tren la : %d ",dem);
    }
    else {
        printf("Day tren khong co phan tu nao chan");
    }
}
void tinhgt ( int a[] , int n ) {
    int i;
    int x;
    printf("\nNhap vao gia tri x : ") ;
    scanf("%d",&x);
    int s=0;
    int count = 0;
    for ( i = 0 ; i < n ; i++ ) {
        if ( abs(x) < abs(a[i]) ) {
            s+= a[i];
            count++;
        }
    }
    printf("Gia tri trung binh cong cac so co gia tri tuyet doi lon hon x la : %.f ",(float)s/count);
}
//kiểm tra có phải dãy tăng dần hay không 
void kiemtra(int a[],int n) {
    int i,j;
    int flag = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i+1 ; j < n ; j++ ) {
            if ( a[j] > a[i] ) {
                flag = 1;
            }
        }
    }
    if ( flag == 1 ) {
        printf("\nDay tren la day tang dan");
    }
    else if ( flag == 0 ) {
        printf("\nDay khong phai la day tang dan");
    }
}

int main() {
    int a[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    dem(a,n);
    tinhgt(a,n);
    kiemtra(a,n);
}
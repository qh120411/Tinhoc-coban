#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void nx(int a[100], int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%d",a[i]);
    }
}
//tính trung bình nhân các số dương 
void tbn(int a[100], int n) {
    int i;
    int flag = 0 ;
    int s = 1;
    for ( i = 0 ; i < n ; i++ ) {
        if ( a[i] > 0 ) {
            s *= a[i];
            flag = 1;
        }
    }
    if ( flag == 1 ) {
        printf("\nGia tri trung binh nhan cac so duong la : %d",s);
    }
    if ( flag == 0 ){
        printf("\nDay tren khong co so nhan");
    }
    
}
//tìm giá trị lớn nhất của dãy sin

void gtrisinmax(int a[100], int n) {
    int i;
    double sinmax = -1;
    for ( i = 0 ; i < n ; i++ ) {
        double ss = sin(a[i] * M_PI / 180);
        if ( ss > sinmax ) {
            sinmax = ss;
        }
    }
    printf("\nGia tri lon nhat cua day sin la : %lf ",sinmax);
    
}
void check( int a[100] , int n ) {
    int i;
    int count = 1;
    for ( i = 0 ; i < n-1 ; i++ ) {
            if ( a[i] >= a[i+1] ) {
                count = 0;
            } 
        }
    if ( count == 1 ) {
        printf("\nDay la day don dieu tang");
    }
    else if ( count == 0 ) {
        printf("\nDay khong phai la day don dieu tang");
    }
}


int main () {
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    int a[100];
    nx(a,n);
    tbn(a,n);
    gtrisinmax(a,n);
    check(a,n);
}
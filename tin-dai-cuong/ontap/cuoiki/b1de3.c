#include<stdio.h>
#include<float.h> 
#include<math.h>

void nx(float a[100], int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%f",&a[i]);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%.2f",a[i]);
    }
}
void check ( float a[100], int n ) {
    int i;
    float max = FLT_MIN;
    for ( i = 0 ; i < n ; i++ ) {
        if ( a[i]/(i+1) > max ) {
            max = a[i]/(i+1);
        }
    }
    printf("\nGia tri max la : %.2f",max);
}
void tong (float a[100], int n) {
    int i;
    float sum = 0;
    int dem = 0;
    for ( i = 0 ; i < n ; i++ ) {
        if (a[i] > 0 ) {
            sum += a[i];
            dem = 1;
        }
    }
    if ( dem = 1 ) {
        printf("\nTong cac phan tu duong cua ma tran la : %.2f",sum);
    }
    else {
        printf("\n0");
    }

}
void ss ( float a[100], int n, int x) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        if ( abs(a[i]) > x ) {
            printf("\n%.2f",a[i]);
        }
    }
}

int main() {
    float a[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    nx(a,n);
    check(a,n);
    tong(a,n);
    int x;
    printf("\nNhap vao x : ");
    scanf("%d",&x);
    ss(a,n,x);

}
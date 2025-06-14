#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    int a[100];
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%d",a[i]);
    }
    int x;
    printf("\nNhap vao x : ");
    scanf("%d",&x);
    int check = 0 ;
    int j;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i+1 ; j < n ; j++ ) {
            if ( x > a[i] && x < a[j] ) {
                check = 1;
            }
        }
    }
    if ( check == 1 ) {
        printf("\nx nam trong day tren");
    }
    else {
        printf("\nx 0 thuoc day tren");
    }
    //ỉn ra 3 phần tử lớn nhất của dãy
    int k;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
     for (int i = 0; i < n; i++) {
        // Cập nhật max1, max2, max3
        if (a[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max3 = max2;
            max2 = a[i];
        } else if (a[i] > max3) {
            max3 = a[i];
        }
    }

    // In kết quả
    printf("\n3 giá trị lớn nhất là: %d, %d, %d\n", max1, max2, max3);
    
    //
    double S = 0;
    int kiem = 0;
    for ( i = 0 ; i < n-1 ; i++ ) {
            if ( a[i] - a[i+1] != 0 ) {
                S += (double)( a[i] + a[i+1] ) / ( a[i] - a[i+1] );
                kiem = 1;
            }
        }
    if (kiem = 1) {
        printf("\nGia tri cua S la : %.2lf",S);
    }
    else {
        printf("\nKhong tinh duoc");
    }
    }



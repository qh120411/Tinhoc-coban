#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Nhap vao bac cua n : ");
    scanf("%d",&n);
    int i;
    double a[100];
    // Nhập vào đa thức P
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i);
        scanf("%lf",&a[i]);
    }
    for ( i = 0 ; i < n ; i++ ) {
        if ( i == 0 ) {
            printf("%.lf",a[i]);
        }
        if ( i == 1 ) {
            printf("+%.lfx",a[i]);
        }
        if ( i > 1 ) {
            printf("+%.lfx^%d",a[i],i);
        }
    }
    int x;
    printf("\nNhap vao x : ",x);
    scanf("%d",&x);
    double p=0;
    for ( i = 0 ; i < n ; i++ ) {
        p+= a[0] + a[i]*pow(x,i);
    } 
    printf("\n%.lf",p);
    double dhp=0;
    for ( i = 1 ; i <= n ; i++ ) {
        dhp += a[i] + a[i]*i*pow(x,i-1);
    }
    printf("\n%.lf",dhp);
    double s = sqrt ( 2021 + p + dhp ) ;
    printf("\nGia tri cua S la : %.2lf",s);

    int m;
    printf("\nNhap vao bac cua m : ");
    scanf("%d",&m);
    do {
        if ( m == n ) {
            printf("\nVui long nhap lai ( bac cua m phai khac n ) : ");
            scanf("%d",&m);
        }
    } while ( m==n );
    for ( i = 0 ; i < m ; i++ ) {
        printf("\nNhap vao a[%d] : ",i);
        scanf("%lf",&a[i]);
    }
    for ( i = 0 ; i < m ; i++ ) {
        if ( i == 0 ) {
            printf("%.lf",a[i]);
        }
        if ( i == 1 ) {
            printf("+%.lfx",a[i]);
        }
        if ( i > 1 ) {
            printf("+%.lfx^%d",a[i],i);
        }
    }
    double q = 0;
     for ( i = 0 ; i < n ; i++ ) {
        q= a[0] + a[i]*pow(x,i);
    } 
    printf("\n%.lf",q);
    double hieudathuc = p - q ;
    printf("\nHieu da thuc khac bac la : %.lf",hieudathuc);
    

}

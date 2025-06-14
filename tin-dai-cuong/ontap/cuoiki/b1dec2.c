#include<stdio.h>
#include<math.h>

void nhapP(double a[100], int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%lf",&a[i]);
    }
    printf("Da thuc P(x) la : ");
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
}
void dathucP(double a[100], int n, int x) {
    //Tính đa thức P
    int i;
    double dtP = 0 ;
    for ( i = 0 ; i < n ; i++ ) {
        dtP += a[i] * pow ( x , i ) ;
    }
    double dhP = 0;
    for ( i = 1 ; i <= n ; i++ ) {
        dhP += a[i] * i * pow ( x, i-1);
    }
    printf("P= %.lf && P' = %.lf ",dtP,dhP);
    double S = sqrt ( 2021 + dtP + dhP ) ;
    printf("Gia tri cua S la : %.2lf ",S);
}
int nhapQ ( double a[100], int m) {
    int i;
    for ( i = 0 ; i < m ; i++ ) {
        printf("Nhap vao a[%d] : ",i+1);
        scanf("%lf",&a[i]);
    }
    printf("\nDa thuc Q(x) la : ");
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

}
void dathucQ(double a[100], int m, int x) {
    //Tính đa thức Q
    int i;
    double dtQ = 0 ;
    for ( i = 0 ; i < m ; i++ ) {
        dtQ += a[i] * pow ( x , i ) ;
    }
    printf("\nQ = %.lf",dtQ);
}

int main() {
    double a[100];
    int n;
    printf("Nhap vao n la bac cua da thuc P : ");
    scanf("%d",&n);
    nhapP(a,n);
    int x;
    printf("\nNhap vao x : ");
    scanf("%d",&x);
    dathucP(a,n,x);
    int m;
    printf("\nNhap vao m la bac cua da thuc Q : ");
    scanf("%d",&m);
    do {
        if ( m == n ) {
            printf("Vui long nhap lai ( bac n khac bac m ) : ");
            scanf("%d",&m);
        }
    } while ( m == n ) ;
    nhapQ(a,m);
    dathucQ(a,m,x);
}
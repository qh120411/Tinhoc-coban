#include<stdio.h>
#include<math.h>

int main() {
    int a[100];
    int n;
    printf("Nhap vao bac cua n : ");
    scanf("%d",&n);
    int i;
    //Nhập và in ra P(x)
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0 ; i < n ; i++ ) {
        if ( i == 0 ) {
            printf("%d",a[i]);
        }
        if ( i == 1 ) {
            printf("+%dx",a[i],i);
        }
        if ( i == 2 ) {
            printf("+%dx^%d",a[i],i);
        }
    }
    int x;
    printf("\nNhap vao gia tri cua x : ");
    scanf("%d",&x);
    //tính gia trị p(x)
    double dtp = 0;
    for ( i = 0 ; i < n ; i++ ) {
        dtp += a[i]*(double)pow(x,i);
    }
    printf("\nP(x) = %.2lf",dtp);
    //tính giá trị đạo hàm p(x)
    double dhp = 0;
    for ( i = 0 ; i < n ; i++ ) {
        dhp += i*a[i]*(double)pow(x,i-1);
    }
    printf("\nP'(x) = %.2lf",dhp);
    //Tính S
    printf("\nGia tri cua S la : %.2lf",sqrt(2021 + dtp + dhp));

    //Nhập Q(x);
    int m;
    printf("\nNhap vao bac cua m : ");
    scanf("%d",&m);
    do {
        if ( m == n ) {
            printf("\nVui long nhap lai ( voi bac cua m khac bac cua %d ) : ",n);
            scanf("%d",&m);
        }
    } while ( m == n );

    for ( i = 0 ; i < m ; i++ ) {
        printf("Nhap a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0 ; i < m ; i++ ) {
        if ( i == 0 ) {
            printf("%d",a[i]);
        }
        if ( i == 1 ) {
            printf("+%dx",a[i],i);
        }
        if ( i == 2 ) {
            printf("+%dx^%d",a[i],i);
        }
    }
    //Tính giá trị của Q(x)
    double dtq = 0;
    for ( i = 0 ; i < m ; i++ ) {
        dtq += a[i]*(double)pow(x,i);
    }
    printf("\nQ(x) = %.2lf",dtq);
    printf("\nHieu cua P(x) va Q(x) la : %.2lf",dtp-dtq);
}
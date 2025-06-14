#include<stdio.h>
#include<math.h>
#include<limits.h>

struct diem{
    char ten;
    int x;
    int y;
};
void nhap(struct diem a[100], int n){
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ten diem : ");
        scanf(" %c",&a[i].ten);
        printf("Nhap vao x%d : ",i+1);
        scanf("%d",&a[i].x);
        printf("Nhap vao y%d : ",i+1);
        scanf("%d",&a[i].y);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%c(%d,%d)",a[i].ten,a[i].x,a[i].y);
    }
}
void check ( struct diem a[100], int n) {
    int i,j;
    int dem=0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {
            if ( a[i].x < 0 && a[i].y < 0 && a[j].x < 0 && a[j].y < 0 ) {
                dem++;
            }
        }
    }
    if ( dem > 0 ) {
        printf("\n%d",dem);
    } else {
        printf("\n0");
    }

}
void kiem ( struct diem a[100], int n, int r) {
    int i;
    float dodai = 0;
    int count = 0 ;
    for ( i = 0 ; i < n ; i++ ) {
        dodai = sqrt ( pow ( a[i].x , 2 ) + pow ( a[i].y , 2 ) );
        if ( dodai > r ) {
            count++;
        }
    }
    if ( count > 0 ) {
        printf("\nCo %d diem nam ngoai duong tron tam O",count);
    }else {
        printf("\n0");
    }

}
void tinh ( struct diem a[100], int n) {
    int i,j;
    int xmax = INT_MIN;
    int xmin = INT_MAX;
    int ymax = INT_MIN;
    int ymin = INT_MAX;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {
            if ( a[i].x > xmax ) {
                xmax = a[i].x;
            }
            if ( a[j].x < xmin ) {
                xmin = a[j].x;
            }
            if ( a[i].y > ymax ) {
                ymax = a[i].y;
            }
            if ( a[j].y < ymin ) {
                ymin = a[j].y;
            }
        }
    }
    float canh;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {
            canh = (float) sqrt ( pow ( (xmax - xmin) , 2.0 ) + pow ( (ymax - ymin) , 2.0 ) );
        }
    }
    printf("\nDien tich hinh chu nhat nho nhat la : %.2f ",canh);

}

int main() {
    struct diem a[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    nhap(a,n);
    check(a,n); 
    int r;
    printf("\nNhap vao ban kinh R : ");  
    scanf("%d",&r);
    kiem(a,n,r);
    tinh(a,n);
}
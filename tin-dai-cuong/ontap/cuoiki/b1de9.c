#include<stdio.h>
#include<math.h>

struct diem {
    char ten;
    int x;
    int y;
};

void nhap(struct diem a[100],int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ki tu diem : ");
        scanf(" %c",&a[i].ten);
        printf("Nhap vao toa do x%d : ",i+1);
        scanf("%d",&a[i].x);
        printf("Nhap vao toa do y%d : ",i+1);
        scanf("%d",&a[i].y);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%c(%d,%d)",a[i].ten,a[i].x,a[i].y);
    }
}
void tinh(struct diem a[100],int n) {
    int i,j;
    float min1=3.4E+38;
    float min2=3.4E+38;
    int flag1 = 0;
    int flag2 = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i+1 ; j < n ; j++ ) {
            // với oy;
            if ( a[j].x - a[i].x == 0 && a[j].y - a[i].y != 0 ) {
                float canh1 = sqrt ( a[j].y - a[i].y ) ;
                if ( canh1 < min1 ) {
                    min1 = canh1;
                }
                flag1 = 1;
            }
            // với ox
            if ( a[j].x - a[i].x != 0 && a[j].y - a[i].y == 0 ) {
                float canh2 = sqrt ( a[j].x - a[i].x ) ;
                if ( canh2 < min2 ) {
                    min2 = canh2;
                }
                flag2 = 1;
            }
        }
    }
    if ( flag1 == 1 && flag2 == 1 ) {
        printf("\nDien tich cua hcn co chieudai chieu rong // voi truc toa do la : %.2f",min1*min2);
    }
    else {
        printf("\n0");
    }


}

int main() {
    struct diem a[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    nhap(a,n);
    tinh(a,n);
}
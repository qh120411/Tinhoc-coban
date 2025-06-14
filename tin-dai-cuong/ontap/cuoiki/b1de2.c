#include<stdio.h>
#include<limits.h>
#include<math.h>

struct toado {
    char diem;
    int x;
    int y;
};

void nhap(struct toado a[100], int n){
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ten diem %d : ",i+1);
        scanf(" %c",&a[i].diem);
        printf("Nhap vao x%d : ",i+1);
        scanf("%d",&a[i].x);
        printf("Nhap vao y%d : ",i+1);
        scanf("%d",&a[i].y);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%c(%d,%d)",a[i].diem,a[i].x,a[i].y);
    }
}
int demdiem( struct toado a[100], int n ) {
    int i;
    int dem = 0;
    for ( i = 0 ; i < n ; i++ ) {
        if ( a[i].x < 0 && a[i].y < 0 ) {
            dem++;
        }
    }
    if ( dem > 0 ) {
        return dem;
    }
    else {
        return 0;
    }
}
void maxd ( struct toado a[100], int n) {
    int i;
    float max = -1;
    float d=0;
    int xmax=-1;
    int ymax=-1;
    char diemmax='A';
    for ( i = 0 ; i < n ; i++ ) {
        d = (float)sqrt(pow(a[i].x,2.0)+pow(a[i].y,2.0));
        if ( d > max ) {
            max = d;
            diemmax = a[i].diem;
            xmax = a[i].x;
            ymax = a[i].y;
        }
    }
    printf("\n%c(%d,%d) la diem xa goc toa do nhat la : %.2f ",diemmax,xmax,ymax,max);
}
int check(struct toado a[100], int n) {
    int i,j;
    int count = 0 ;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i+1 ; j < n ; j++ ) {
            if ( ( a[i].x > 0 && a[i].y > 0 ) && ( a[j].x > 0 && a[j].y < 0 ) ) {
                count++;
            }
            if ( ( a[i].x > 0 && a[i].y > 0 ) && ( a[j].x < 0 && a[j].y < 0 ) ) {
                count++;
            }
            if ( ( a[i].x < 0 && a[i].y > 0 ) && ( a[j].x > 0 && a[j].y < 0 ) ) {
                count++;
            }
            if ( ( a[i].x < 0 && a[i].y > 0 ) && ( a[j].x < 0 && a[j].y < 0 ) ) {
                count++;
            }
        }
    }
    if ( count > 0 ) {
        return count;
    }
    else {
        return 0;
    }
}

int main() {
    struct toado a[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    nhap(a,n);
    printf("\nSo diem thuoc goc phan tu thu 3 la : %d",demdiem(a,n));
    maxd(a,n);
    printf("\nSo doan thang cat truc hoanh la : %d",check(a,n));

}
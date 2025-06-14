#include<stdio.h>
#include<float.h>

void tbc(int n , float x[100], float a,float b) {
    int i;
    float s=0;
    int dem=0;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao x[%d] : ",i+1);
        scanf("%f",&x[i]);
    }
    for ( i = 0 ; i < n ; i++) {
        if ( x[i] >= a && x[i] <= b) {
            s+= x[i];
            dem++;
        }
    }
    if ( dem > 0 ) {
        printf("\nGia tri tbc trong khoang tu %.2f den %.2f la : %.2f ",a,b,s/dem);
    }
    else {
        printf("\n0");
    }
}
void maxchan( int n, float x[100] ) {
    int i;
    float max = FLT_MIN;
    for ( i = 0 ; i < n ; i++ ) {
        int songuyen = (int)x[i];
        if (x[i] == songuyen && songuyen % 2 == 0 )
            if ( songuyen > max ) {
                max = x[i];
            }
        }
    printf("Vay max chan la : %.2f",max);
}
void sx ( int n, float x[100]) {
    int i,j;
    int temp;
    printf("\nGia tri day so tang dan la : ");
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {
            if ( x[i] > x[j] ) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        printf("\n%.2f",x[i]);
    }
}
int main() {
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    float a,b;
    printf("Nhap vao lan luot a va b : ");
    float x[100];
    scanf("%f%f",&a,&b);
    tbc(n,x,a,b);
    maxchan(n,x);
    sx(n,x);
}
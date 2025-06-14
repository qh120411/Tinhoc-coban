#include<stdio.h>
#include<limits.h>

void nhap(int a[100][100], int m, int n){
    int i,j;
    for ( i = 0 ; i < m ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
           printf("Nhap vao a[%d][%d] : ",i+1,j+1);
           scanf("%d",&a[i][j]); 
        }
    }
    for ( i = 0 ; i < m ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
             printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
int tongc(int a[100][100], int m, int n){
    int i,j;
    int sum=0;
    for ( i = 0 ; i < m ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
            if ( j % 2 == 0 ) {
                sum+= a[i][j];
            }
        }
    }
    return sum;
}
void tinh ( int a[100][100], int m, int n ) {
    int i,j;
    int flag = 0;
    int s=0;
    for ( i = 0 ; i < m ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] % 2 == 0 && a[i][j] > 10 ) {
                s+= a[i][j];
                flag++;
            }
        }
    }
    if ( flag > 0 ) {
        printf("\nGia tri trung binh cong cac phan tu chan lon hon 10 trong ma tran la : %.2f",(float)s/flag);
    }
    else {
        printf("\n0");
    }
}
int maxmt ( int a[100][100], int m, int n) {
    int i,j;
    int max = INT_MIN;
    for ( i = 0 ; i < m ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
            if ( a[i][j] > max ) {
                max = a[i][j];
            }
        }
    }
    return max;

}

int main(){
    int a[100][100];
    int m,n;
    printf("Nhap vao hang m cot n : ");
    scanf("%d%d",&m,&n);
    nhap(a,m,n);
    printf("\nGia tri tong cac phan tu thuoc cot le cua ma tran la : %d",tongc(a,m,n));
    tinh(a,m,n);
    printf("\nGia tri max cua ma tran la : %d",maxmt(a,m,n));
}
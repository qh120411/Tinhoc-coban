#include<stdio.h>

int main(){
    int a[100][100];
    int n;
    printf("Nhap vao ma tran vuong cap : ");
    scanf("%d",&n);
    int i,j;
    for ( i = 0 ; i < n ; i++) {
        for ( j = 0 ; j < n ; j++ ) {
            printf("Nhap vao a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Tính trung bình cộng các phần tử âm nằm dưới đường chéo phụ
    int s=0;
    int con=0;
    int dem=0;
    for ( i = 0 ; i < n ; i++) {
        for ( j = 0 ; j < n ; j++ ) { 
            if ( i + j > n-1 ) {
                if ( a[i][j] < 0 ) {
                    s+= a[i][j];
                    con=1;
                    dem++;
              }
            }
        }
    }
    if ( con == 1 ) {
        printf("Trung binh cong cac phan tu am nam duoi duong cheo phu la : %d ",s/dem);
    }
    else {
        printf("Khong co phan tu nao am");
    }

    //Kiểm tra ma trận tam giác dưới không ?
    int flag = 0;
    for ( i = 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if ( i == j && a[i][j] != 0 ) {
                flag = 1;
            }
            if ( i > j && a[i][j] != 0 ) {
                flag = 1;
            }
        }
    }
    if ( flag == 0 ) {
        printf("\nDay la ma tran tam giac duoi");
    }
    else {
        printf("\nMa tran duoi khong phai la ma tran tam giac duoi");
    }

    //Ma trận chuyển vị
    printf("\nMa tran chuyen vi la: \n");
    for( j = 0 ; j < n ; j++ ) {
        for ( i = 0 ; i < n ; i++ ) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    //Tìm các cặp đối xứng qua đường chéo kính
    int count=0;
    for( i = 0 ; i < n ; i++ ) {
        for ( j = i+1 ; j < n ; j++ ) { 
            if ( a[i][j] == a[j][i] ) {
                count++;
            }
        }
    }
    printf("Cac cap doi xung nhau qua duong cheo chinh la : %d",count);
}
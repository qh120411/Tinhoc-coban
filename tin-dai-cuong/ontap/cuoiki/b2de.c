#include<stdio.h>
#include<string.h>

struct sach{
    int ma;
    char tens[100];
    char tentg[100];
    float gia;
};
void nhap( struct sach a[100], int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ma cuon sach : ");
        scanf("%d",&a[i].ma);
        printf("Nhap vao ten cua cuon sach : ");
        getchar();
        gets(a[i].tens);
        printf("Nhap vao ten cua tac gia : ");
        gets(a[i].tentg);
        printf("Nhap vao gia cua cuon sach : ");
        scanf("%f",&a[i].gia);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%d\t%s\t%s\t%.2f",a[i].ma,a[i].tens,a[i].tentg,a[i].gia);
    }

}
void check ( struct sach a[100], int n) {
    int i;
    printf("Nhap vao ten cua tac gia can tim : ");
    char tentgtim[100];
    getchar();
    gets(tentgtim);
    int flag = 0;
    for ( i = 0 ; i < n ; i++ ) {
        if ( strcmp ( a[i].tentg, tentgtim ) == 0 ) {
            printf("\n%d\t%s\t%s\t%.2f",a[i].ma,a[i].tens,a[i].tentg,a[i].gia);
            flag = 1;
        }
    }
    if ( flag == 0 ) {
        printf("Khong tim thay tac gia can tim");
    }
}
void maxprice (struct sach a[100], int n ) {
    int i;
    int max = -1 ;
    char maxtens = a[0].ten;
    char maxtentg = a[0].tentg;
    for ( i= 0 ; i < n ; i++ ) {
        if ( a[i].gia > max ) {
            max = a[i].gia;
            strcpy( maxtens, a[i].tens );
            strcpy( maxtentg, a[i].tentg)
        }
    }
    printf("%s cua %s la cuon co gia dat nhat la : %f",maxtens,maxtentg,max);
}


int main() {
    struct sach a[100];
    int n;
    printf("Nhap vao so luong cuon sach : ");
    scanf("%d",&n);
    nhap(a,n);
    check(a,n);
    maxprice(a,n);

}
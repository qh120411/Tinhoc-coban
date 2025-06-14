#include<stdio.h>

struct thisinh {
    char ten[100];
    char msv[100];
    int nsinh;
    float diem;
};

void nhap(struct thisinh sv[100]; int n) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ma sinh vien : ");
        getchar();
        gets(sv[i].msv);
        printf("Nhap vao ten cua sinh vien : ");
        getchar();
        gets(sv[i].ten);
        printf("Nhap vao nam sinh cua sinh vien : ");
        scanf("%d",&sv[i].nsinh);
        printf("Nhap vao diem cua sinh vien : ");
        scanf("%f",&sv[i],diem);
    }
    printf("\nDanh sach cua sinh vien : ") ;
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%s\t%s\t%d\t%f",sv[i].msv,sv[i].ten,sv[i].nsinh,sv[i].diem);
    }
}
//Tim sv lon tuoi nhat trong lop;
void 



int main() {
    struct thisinh sv[100];
    int n;
    printf("Nhap vao so luong sinh vien : ");
    scanf("%d",&n);
    nhap(sv,n);
}
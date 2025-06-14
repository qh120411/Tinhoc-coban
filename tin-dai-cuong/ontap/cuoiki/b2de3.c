#include<stdio.h>
#include<float.h>
#include<string.h>

struct sinhvien {
    int msv;
    char ten[100];
    float diem;
    char truong;
};
void nx ( struct sinhvien sv[100], int n ) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ma sinh vien : ");
        scanf("%d",&sv[i].msv);
        printf("Nhap vao ten cua sinh vien : ");
        getchar();
        gets(sv[i].ten);
        printf("Nhap vao diem cua thi sinh : ");
        scanf("%f",&sv[i].diem);
        printf("Nhap vao ten truong cua sinh vien : ");
        scanf(" %c",&sv[i].truong);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%d\t%s\t%.2f\t%c",sv[i].msv,sv[i].ten,sv[i].diem,sv[i].truong);
    }
}
void max(struct sinhvien sv[100], int n) {
    int i;
    float diem1 = 0, diem2 = 0, diem3 = 0;
    float max = 0; 
    int maxtruong = 0;

    for (i = 0; i < n; i++) {
        if (sv[i].truong == 1) {
            diem1 += sv[i].diem;
        }
        if (sv[i].truong == 2) {
            diem2 += sv[i].diem;
        }
        if (sv[i].truong == 3) {
            diem3 += sv[i].diem;
        }
    }
    for ( i = 0 ; i < n ; i++ ) {
        if (diem1 > max) {
            max = diem1;
            maxtruong = i+1;
        }
    }
    printf("\nTruong %d la truong co so diem cao nhat : %.2f", maxtruong, max);
}

void check ( struct sinhvien sv[100], int n ) {
    float diemmax = FLT_MIN;
    char tenmax[100];
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        if ( sv[i].diem > diemmax ) {
            diemmax = sv[i].diem;
            strcpy(tenmax,sv[i].ten);
        }
    }
    printf("\nSinh vien %s co diem cao nhat la : %.2f ",tenmax,diemmax);
}



int main() {
    struct sinhvien sv[100];
    int n;
    printf("Nhap vao n : ");
    scanf("%d",&n);
    nx(sv,n);
    max(sv,n);
    check(sv,n);


}
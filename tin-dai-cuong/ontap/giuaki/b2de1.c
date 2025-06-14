#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct giangvien {
    char ten[100];
    char chuyenmon;
    float thamnien;
};
void ds(struct giangvien gv[100], int n ) {
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        printf("Nhap vao ten giang vien : ");
        getchar();
        gets(gv[i].ten);
        printf("Nhap vao chuyen mon cua giang vien : ");
        scanf(" %c",&gv[i].chuyenmon);
        printf("Nhap vao so nam cong tac cua giang vien : ");
        scanf("%f",&gv[i].thamnien);
    }
    for ( i = 0 ; i < n ; i++ ) {
        printf("\n%s\t%c\t%.f",gv[i].ten,gv[i].chuyenmon,gv[i].thamnien);
    }
}
void tntb(struct giangvien gv[100], int n) {
    int demT=0,demA=0, demV=0;
    int sT=0,sA=0,sV=0;
    int i;
    for ( i = 0 ; i < n ; i++ ) {
        if ( gv[i].chuyenmon == tolower('T') ) {
            sT += gv[i].thamnien;
            demT++;
        }
        if ( gv[i].chuyenmon == tolower('V') ) {
            sV += gv[i].thamnien;
            demV++;
        }
        if ( gv[i].chuyenmon == tolower('A') ) {
            sA += gv[i].thamnien;
            demA++;
            } 
        }
    { 
        if ( demT > 0 ) {
            printf("\nTham nien trung binh cua chuyen mon T la : %.2f",(float)sT/demT);
        }
        else if ( demT == 0 ) {
            printf("\nKhong co giang vien chuyen mon T ");
            }
        }
    { 
        if ( demV > 0 ) {
            printf("\nTham nien trung binh cua chuyen mon V la : %.2f",(float)sV/demV);
        }
        else if ( demV == 0 ) {
            printf("\nKhong co giang vien chuyen mon V ");
            }
        }
    { 
        if ( demA > 0 ) {
            printf("\nTham nien trung binh cua chuyen mon A la : %.2f",(float)sA/demA);
        }
        else if ( demA == 0 ) {
            printf("\nKhong co giang vien chuyen mon A ");
            }
        }
}
void maxtn(struct giangvien gv[100], int n){
    int i;
    int maxtn = -1;
    char ten[100];
    strcpy(ten,gv[0].ten);
    for ( i = 0 ; i < n ; i++ ) {
        if ( gv[i].thamnien > maxtn ){
            maxtn = gv[i].thamnien;
            strcpy(ten,gv[i].ten);
        }
    }
    printf("\nGiang vien %s la giang vien co so tham nien cao nhat la %d",ten,maxtn);
}
void check(struct giangvien gv[100], int n) {
    
}

int main() {
    int n;
    printf("Nhap vao so luong giang vien : ");
    scanf("%d",&n);
    struct giangvien gv[100];
    ds(gv,n);
    tntb(gv,n);
    maxtn(gv,n);

}
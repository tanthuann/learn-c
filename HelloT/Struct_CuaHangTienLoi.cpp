#include<stdio.h>
#include<iostream>

using namespace std;
struct SanPham{
    char masp[10];
    char tensp[30];
    char donvitinh[10];
    float dongia;
    char ngaysanxuat[12];
    char noisanxuat[50];
}sp;
    
    


SanPham NhapMotSanPham(SanPham);
void NhapNhieuSanPham(SanPham sp[100],int &);
void XuatMotSanPham();
void XuatNhieuSanPham(SanPham [], int);
void ThemSanPham(SanPham sp[100], int &n);
void TimMa(SanPham [], int n, char[]);
void TimTen(SanPham [100],int, char [50]);
//SanPham * TimDonViTinh(SanPham * ,int,char []);
//SanPham * TimGia(SanPham *,int,float);
//SanPham * TimNgaySanXuat(SanPham *,int,char [])
//SanPham * TimNoiSanXuat(SanPham *,int,char[]);
//int SuaThongTin(Sanpham *,int , Sanpham);
//int XoaTheoMa(SanPham *,int ,char[]);
//int XoaTheoNgay(SanPham *,int,char[]);
void LuuFile(SanPham [100],int,char[]);
void DocFile(SanPham [100],int &,char []);
//void ThongKeSanPhamTheoNgay(SanPham *,int);

int main(int argc, char const *argv[])
{
    int n;
    char ten[30],ma[10];
    SanPham sp[100];
    char filename[50]="T:/C/data.txt";
    //scanf("%d",&n);
    DocFile(sp,n,filename);
    //NhapNhieuSanPham(sp,n);
    ThemSanPham(sp,n);
    XuatNhieuSanPham(sp,n);
    //LuuFile(sp,n,filename);   
    //fflush(stdin);
    TimTen(sp,n,ten);
    TimMa(sp,n,ma);
    return 0;
}

SanPham NhapMotSanPham(SanPham sp){
    printf("Nhap thong tin san pham :\n");
    printf("Nhap ma san pham : ");      gets(sp.masp);
    printf("Nhap ten san pham : ");     gets(sp.tensp);
    fflush(stdin);
    printf("Nhap don vi tinh : ");      gets(sp.donvitinh);
    printf("Nhap don gia : ");          scanf("%f",&sp.dongia);
    fflush(stdin);
    printf("Nhap ngay san xuat : ");    gets(sp.ngaysanxuat);
    printf("Nhap noi san xuat : ");     gets(sp.noisanxuat);
    return sp;
}

void XuatMotSanPham(SanPham sp){
    printf("Thong tin san pham :\n");
    printf("Ma san pham : %s\n",sp.masp);       
    printf("Ten san pham : %s\n",sp.tensp);     
    printf("Don vi tinh : %s\n",sp.donvitinh);      
    printf("Don gia : %f\n",sp.dongia);         
    printf("Ngay san xuat : %s\n",sp.ngaysanxuat);  
    printf("Noi san xuat : %s\n",sp.noisanxuat);
}

void NhapNhieuSanPham(SanPham sp[],int &n){
    for (int i = 0; i < n; ++i)
    {   char s;
        fflush(stdin);
        sp[i]=NhapMotSanPham(sp[i]);
        if(i!=n-1){
            printf("Ban co muon nhap tiep khong ? An 'no' de dung :");
        scanf("%s",&s);
        }
        fflush(stdin);
        if(s=='no'){        
            n=i;
            break; 
        }
    }
}

void XuatNhieuSanPham(SanPham sp[],int n){
    for (int i = 0; i < n; ++i){
        printf("--------------------------------------------------\n");
        XuatMotSanPham(sp[i]);
    }
}

void ThemSanPham(SanPham sp[100],int &n){
    int a;
    printf("Them may san pham ? ");
    scanf("%d",&a);
    for (int i = n; i < n+a; ++i)
    {
        fflush(stdin);
        sp[i]=NhapMotSanPham(sp[i]);
    }
    n+=a;
}

void LuuFile(SanPham sp[100],int n,char filename[30]){
    FILE *f;
    f=fopen(filename,"w");
    for (int i = 0; i < n; ++i)
    {
        fprintf(f,"%s\t%s\t%s\t%f\t%s\t%s\n",
            sp[i].masp,
            sp[i].tensp,
            sp[i].donvitinh,
            sp[i].dongia,
            sp[i].ngaysanxuat,
            sp[i].noisanxuat);
    }
    fclose(f);
}

void DocFile(SanPham sp[100],int &n,char filename[50]){
    FILE *f;
    f=fopen(filename,"rt");
    int i=0;
    while(!feof(f))
    {
        fscanf(f,"%s\t%s\t%s\t%f\t%s\t%s\n",
            &sp[i].masp,
            &sp[i].tensp,
            &sp[i].donvitinh,
            &sp[i].dongia,
            &sp[i].ngaysanxuat,
            &sp[i].noisanxuat);
            i++;
    }
    n=i;
    fclose(f);
}

void TimTen(SanPham sp[100],int n,char ten[30]){
    printf("Nhap ten can tim : "); gets(ten);
    char *x;    
    for (int i = 0; i < n; ++i)
    { 
        *x=*sp[i].tensp;
        if(*ten==*x)    
        XuatMotSanPham(sp[i]);
    }
}


void TimMa(SanPham sp[100],int n, char ma[10]){
    printf("Nhap ma sp can tim : "); gets(ma);
    char *x;
    for (int i = 0; i < n; ++i)
    { 
        *x=*sp[i].masp;
        if(*ma==*x)    
        XuatMotSanPham(sp[i]);
    }

}

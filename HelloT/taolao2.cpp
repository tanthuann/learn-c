/************************************************************
* Author: VNCODING
* History 
* 2014/03/17 first create VNCODING
*************************************************************/
#include "stdio.h"
#include "conio.h"
#include "math.h"
#define PI 3.14159
 main()
{
    int n;
    float a, b, c ;
    float R;
    float P;
    float S;
    printf("\n 1. Tinh chu vi & dien tich tam giac");
    printf("\n 2. Tinh chu vi & dien tich hinh chu nhat");
    printf("\n 3. Tinh chu vi & dien tich tron");
    printf("\n Ban chon phuong an nao(1, 2 hay 3) = ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            do
            {
                printf("\n Nhap cac canh cua tam giac:\n");
                scanf("%f %f %f", &a, &b, &c);
            }
            while(a < 0 || b < 0 || c < 0 || (a + b) <= c || (a + c) <= b || (b + c) <= a);
            P = (a + b + c);
            S = sqrt(P*(P/2 - a)*(P/2 - b)*(P/2 - c)/2);
            printf("\n Chu vi tam giac : %f dvdd", P);
            printf("\n Dien tich tam giac : %f dvdt", S);
            break;
        case 2:
            do
            {
                printf("\n Nhap chieu rong hcn: ");
                scanf("%f", &a);
                printf("\n Nhap chieu dai hcn: ");
                scanf("%f", &b);
            }
            while(a < 0 || b < 0);
            P = (a + b)*2;
            S = a * b;
            printf("\n Chu vi hinh vuong : %f dvdd", P);
            printf("\n Dien tich hinh vuong: %f dvdt", S);
            break;
        case 3:
            do
            {
                printf("\n Nhap ban kinh duong tron:");
                scanf("%f", &R);
            }
            while(R <= 0);
            P = 2 * PI * R;
            S = PI * R * R;
            printf("\n Chu vi hinh tron : %f dvdd", P);
            printf("\n Dien tich hinh tron : %f dvdt", S);
            break;
        default:
            printf("\n Exit");
            break;
    }
    getch();
}

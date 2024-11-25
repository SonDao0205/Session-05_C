#include<stdio.h>
int main(){
    int a,b, USCLN,temp,BCNN;
    printf("Nhap so a : ");
    scanf("%d", &a);
    printf("Nhap so b : ");
    scanf("%d", &b);
    temp = a*b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else{
            b -= a;
        }
    }
    USCLN = a;
    BCNN = temp/USCLN;
    printf("BCNN = %d", BCNN);
    return 0;
}
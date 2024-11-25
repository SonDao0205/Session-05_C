#include<stdio.h>
int main(){
    int a,b;
    printf("Nhap so a : ");
    scanf("%d", &a);
    printf("Nhap so b : ");
    scanf("%d", &b);
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
    printf("USCLN = %d", a);
    return 0;
}
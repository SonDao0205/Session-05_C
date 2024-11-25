#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Nhap 1 so nguyen duong :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Tong cac so tu 1 cho den so %d = %d ",n, sum);
    return 0;
}
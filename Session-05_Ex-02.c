#include<stdio.h>
int main(){
    int number = 25;
    int a;
    while (1)
    {
        printf("Nhap so nguyen ngau nhien :");
        scanf("%d", &a);
        if (number == a)
        {
            printf("Dung roi!!\n");
            break;
        }
        else{
            printf("Nhap lai!!\n");
        }
    }
    return 0;   
}
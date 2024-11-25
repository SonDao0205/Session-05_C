#include<stdio.h>
int main(){
    int n, mul = 0;
    for (int n = 1; n <= 9; n++)
    {
        for (int i = 1; i <= 10; i++)
        {
            mul = n * i;
            printf("%d * %d = %d \n", n,i,mul);
        }
        printf("------------------------\n");   
    }
    return 0;

}
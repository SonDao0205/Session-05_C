#include <stdio.h>

int main() {
    int choice;
    float num1, num2, num3, result, min, max;

    do {
        printf("\nCALCULATOR\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("\nLựa chọn của bạn: ");
        scanf("%d", &choice);

        

        switch (choice) {
            case 1:
                printf("Nhập số thứ nhất: ");
                scanf("%f", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%f", &num2);
                printf("Nhập số thứ ba: ");
                scanf("%f", &num3);
                break;
            case 2:
                printf("Nhập số thứ nhất: ");
                scanf("%f", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%f", &num2);
                printf("Nhập số thứ ba: ");
                scanf("%f", &num3);
                result = num1 + num2 + num3;
                printf("Ket qua : %.2f + %.2f + %.2f = %.2f\n",num1,num2,num3,result);
                break;
            case 3:
                printf("Nhập số thứ nhất: ");
                scanf("%f", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%f", &num2);
                printf("Nhập số thứ ba: ");
                scanf("%f", &num3);
                result = (num1 + num2 + num3)/ 3;
                printf("Ket qua : (%.2f + %.2f + %.2f)/3 = %.2f\n",num1,num2,num3,result);
                break;
            case 4:
                printf("Nhập số thứ nhất: ");
                scanf("%f", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%f", &num2);
                if (min > num1)
                {
                    min = num1;
                }
                else{
                    min = num2;
                }
                printf("So nho nhat la : %.2f", min);
            break;
            case 5:
                printf("Nhập số thứ nhất: ");
                scanf("%f", &num1);
                printf("Nhập số thứ hai: ");
                scanf("%f", &num2);
                if (max < num1)
                {
                    max = num1;
                }
                else{
                    min = num2;
                }
                printf("So lon nhat la : %.2f", max);
            break;
            case 6:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}

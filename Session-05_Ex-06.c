#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Thoát\n");
        printf("\nLựa chọn của bạn: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Nhập số thứ nhất: ");
            scanf("%f", &num1);
            printf("Nhập số thứ hai: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Kết quả: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Kết quả: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Kết quả: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                    result = num1 / num2;
                    printf("Kết quả: %.2f / %.2f = %.2f\n", num1, num2, result);
                break;
            case 5:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
                break;
        }

    } while (choice != 5);

    return 0;
}

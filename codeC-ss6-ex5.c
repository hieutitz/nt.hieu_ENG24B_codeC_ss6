#include <stdio.h>

int main() {
    int nam, thang, ngay;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang: ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le\n");
        return 0;
    }

    if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            ngay = 29;
        else
            ngay = 28;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        ngay = 30;
    } else {
        ngay = 31;
    }

    printf("So ngay trong thang %d nam %d la: %d\n", thang, nam, ngay);
    return 0;
}


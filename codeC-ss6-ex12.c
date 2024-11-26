#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    printf("Day Fibonacci dau tien:\n");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
        } else if (i == 2) {
            printf("%d ", b);
        } else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}


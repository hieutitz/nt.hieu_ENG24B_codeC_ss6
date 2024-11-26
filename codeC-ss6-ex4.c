#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("Vo so nghiem\n");
            else printf("Vo nghiem\n");
        } else {
            printf("x = %.2lf\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) printf("Vo nghiem\n");
        else if (delta == 0) printf("x = %.2lf\n", -b / (2 * a));
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }
    return 0;
}


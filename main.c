#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    printf("Hello, World! Again\n");

    int a = 12345678;
    printf("a = %d\n", a);
    double pi = 3.14;
    printf("pi = %.2f\n", pi);

    int sum = 1 + 2 + 3 + 4 + 5 + 6;
    printf("sum = %d\n", sum);

    int res1 = 5 * (6 + 2 / 6) - 10;
    printf("res1 = %d\n", res1);
    int div1 = 5 / 2;
    printf("div1 = %d\n", div1);
    double div2 = 5 / 2;
    printf("div2 = %.3f\n", div2);
    double div3 = 5.0 / 2;
    printf("div3 = %.3f\n", div3);
    char kukac = '@';
    printf("kukac = %c\n", kukac);
    int num1 = 17;
    int num2 = 5;
    int rem = num1 % num2;
    printf("rem = %d\n", rem);

    char nev[] = "Pistaba";
    printf("nev = %s\n", nev);

    return 0;
}

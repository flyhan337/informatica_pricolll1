#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Symma = %d\n", a + b + c + d + e);
    printf("Raznost = %d\n", a - b - c - d - e);
   long long product = (long long)a * b * c * d * e;
    printf("Proizvedenie = %lld\n", product);
    printf("Ostatok ot deleniya na 10 pervogo chisla = %d\n", a % 10);
    printf("Ostatok ot deleniya na 10 vtorogo chisla = %d\n", b % 10);
    printf("Ostatok ot deleniya na 10 tretiego chisla = %d\n", c % 10);
    printf("Ostatok ot deleniya na 10 chetveroto chisla = %d\n", d % 10);
    printf("Ostatok ot deleniya na 10 pyatogo chisla = %d\n", e % 10);
    printf("Razmer peremennoy a = %zu\n", sizeof(a));
    printf("Razmer peremennoy b = %zu\n", sizeof(b));
    printf("Razmer peremennoy c = %zu\n", sizeof(c));
    printf("Razmer peremennoy d = %zu\n", sizeof(d));
    printf("Razmer peremennoy e = %zu\n", sizeof(e));
    return 0;
}
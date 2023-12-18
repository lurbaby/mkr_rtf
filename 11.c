#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

double find_max(double *arr, int size);

int main() {
    setlocale(LC_ALL, "ukr");

    float a, b, c;

    for (int i = 0; i < 3 ; i++){
        float temp;

        printf("Введіть %d елемент: ", i + 1);
        scanf("%f", &temp);

        if (i == 0)
            a = temp;
        else if (i == 1)
            b = temp;
        else if (i == 2)
            c = temp;
    }

    if (a >= b && a >= c)
        printf("Найбільше значення: %f\n", a);
    else if (b >= a && b >= c)
        printf("Найбільше значення: %f\n", b);
    else
        printf("Найбільше значення: %f\n", c);

    return 0;
}
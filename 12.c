#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

double return_res(double x);

int main() {
    setlocale(LC_ALL, "ukr");

    printf("%lf", return_res(20.5));

    return 0;
}

double return_res(double x){

    if (x > 10.5)
        return x+2;
    else if (x < -20.3) {
        if (x < 0)
            return x*-1;
        else
            return x;
    }
    else
        return 3.14159;

}

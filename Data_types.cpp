#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Usando scanf y pritf para obtener e imprimir los diferentes tipos de datos
    int n_int{};
    long n_long{};
    char n_char{};
    float n_float{};
    double n_double{};
    
    scanf("%d %ld %c %f %lf", &n_int, &n_long, &n_char, &n_float, &n_double);
    printf("%d \n", n_int);
    printf("%ld \n", n_long);
    printf("%c \n", n_char);
    printf("%f \n", n_float);
    printf("%lf \n", n_double);
    return 0;
}
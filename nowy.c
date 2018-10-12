#include <stdio.h>

int main() {
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;

    printf("podaj znak "); scanf("%c", &znak);
    printf("podaj liczbe całkowitą "); scanf("%i", &wartosc_calkowita);
    printf("podaj liczbe wymierną "); scanf("%lf", &wartosc_wymierna);
    printf(
            "znak = %c,"
            "\n liczba całkowita = %i,"
            "\n liczba wymierna = %lf",
            znak,
            wartosc_calkowita,
            wartosc_wymierna

    );

    return 0;

}
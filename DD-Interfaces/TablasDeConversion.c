//TablasDeConversion.c
#include <stdio.h>
#include "Conversion.h"

int main (){
    const double lim_inferior = 0;
    const double lim_superior = 300;
    const double incremento = 20;

    printf("Tabla de conversión de Fahrenheit a Celsius:\n");
    printf("Fahrenheit\tCelsius\n");
    for (int fahr = lim_inferior; fahr <= lim_superior; fahr += incremento){
        printf ("%3d\t\t%6.1f\n", fahr, conversionFahrCelsius(fahr));
    }

    const double lim_inferior1 = 0;
    const double lim_superior1 = 100;
    const double incremento1 = 5;

    printf("\nTabla de conversión de Celsius a Fahrenheit:\n");
    printf("Celsius\t\tFahrenheit\n");
    for (int celsius = lim_inferior1; celsius <= lim_superior1; celsius += incremento1){
        printf ("%3d\t\t%6.1f\n", celsius, conversionCelsiusFahr(celsius));
    }
}

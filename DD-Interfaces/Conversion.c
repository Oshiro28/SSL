//Conversion.c
#include "Conversion.h"

double conversionFahrCelsius (double f){
    return (5.0/9.0)*(f-32.0);
}

double conversionCelsiusFahr (double c){
    return ((c * (9.0 / 5.0)) + 32.0);
}

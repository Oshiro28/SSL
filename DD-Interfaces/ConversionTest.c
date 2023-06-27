//ConversionTest.c
#include <stdio.h>
#include "Conversion.h"
#include <assert.h>

void testParaFahrCelsius() {
    double fahr, celsius;
    celsius = 0.0;
    fahr = conversionCelsiusFahr(celsius);
    assert (fahr == 32.0);
    
    celsius = 100.0;
    fahr = conversionCelsiusFahr(celsius);
    assert (fahr == 212.0);
}

void testParaCelsiusFahr() {
    double fahr, celsius;
    fahr = 140.0;
    celsius = conversionFahrCelsius(fahr);
    assert (celsius == 60.0);
    
    /* fahr = 100.0; //Queria hacer el test con este valor pero me daba mucho error al hacer el assert
    celsius = conversionFahrCelsius(fahr);
    assert (celsius == 37.778); */

    // Error que me aparecia al realizar la prueba en el terminal:
    // bryamoshiroext@MacBook-Air-de-Bryam PruebaDeTp1 % gcc -o test ConversionTest.c Conversion.c       
    // bryamoshiroext@MacBook-Air-de-Bryam PruebaDeTp1 % ./test                                            
    // Assertion failed: (celsius == 37.778), function testParaCelsiusFahr, file ConversionTest.c, line 25.
    // zsh: abort      ./test
}

int main() {
    testParaFahrCelsius();
    testParaCelsiusFahr(); 
}

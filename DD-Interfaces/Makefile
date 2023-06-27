#Makefile
all: conversionTabla test

#Esta regla compila la Tabla de conversion de Celsius a Fahrenheit y viceversa
conversionTabla: TablasDeConversion.o Conversion.o ConversionTest.c
	gcc -o conversionTabla TablasDeConversion.o Conversion.o

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c

#Esta regla hace el test de la conversion
test: ConversionTest.o Conversion.o
	gcc -o test ConversionTest.o Conversion.o

clean: 
	rm -f conversionTabla test *.o

/*
 * funcionesAritmeticas.c
 *
 *  Created on: 9 abr. 2022
 *      Author: nav_2
 */
#include <stdio.h>
#include <stdlib.h>

// FUNCION DE DESCUENTO
float descuento(float importe, float valorADescontar)
{
	float valorFinal;

	valorFinal = importe - (importe * valorADescontar /100) ;

	return valorFinal;
}


// FUNCION DE AUMENTO
float aumento(float importe, float valorAAumentar)
{
	float valorFinal;

	return valorFinal = importe + (importe * valorAAumentar/100);
}


// FUNCION DE SUMA
float sumar(float numero1, float numero2)
{
	float suma;

	suma = numero1 + numero2;

	return suma;
}


//FUNCION DE RESTA (NUMEROS POSITIVOS)
float restar(float numero1, float numero2)
{
	float resta;

	resta = numero1 - numero2;

	return resta;
}


// FUNCION DE MULTIPLICACION
int multiplicar(int numero1, int numero2)
{
	int multiplicacion;

	multiplicacion = numero1 * numero2;

	return multiplicacion;
}


// FUNCION DE DIVISION
int dividir(int dividendo, int divisor)
{
	int division;

	if(divisor == 0)
	{
		printf("El divisor no puede ser 0.");
	}

	division = dividendo / divisor;

	return division;
}





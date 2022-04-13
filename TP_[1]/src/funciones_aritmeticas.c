#include <stdio.h>
#include <stdlib.h>


// FUNCION DE DESCUENTO
int descuento(int importe, int valorADescontar)
{
	int valorFinal;

	valorFinal = importe - (importe * valorADescontar/100);

	return valorFinal;
}


// FUNCION DE AUMENTO
float aumento(int importe, int valorAAumentar)
{
	float valorFinal;

	valorFinal = ((float) importe + (float) (importe * valorAAumentar/100));

	return valorFinal;
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

	multiplicacion =  numero1 * numero2;

	return multiplicacion;
}


// FUNCION DE DIVISION
float dividir(int dividendo, int divisor)
{
	float division;

	if(divisor == 0)
	{
		printf("El divisor no puede ser 0.");
	}

	division = (float) dividendo / (float) divisor;

	return division;
}


//FUNCION DE CARGA DE DATOS FORZADA

void cargaForzada(int km, int precioAA, int precioLat, float bitcoin)
{
	int precioDebitoAerolineas;
	int precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	int diferenciaDePrecios;

	printf("\n\nSe cargaron datos para calcular forzadamente y se realizaron los c%clculos..\n\n", 160);

	//Tarjeta de debito
	precioDebitoAerolineas = descuento(precioAA, 10);
	precioDebitoLatam = descuento(precioLat, 10);

	//Tarjeta de credito
	precioCreditoAerolineas = aumento(precioAA, 25);
	precioCreditoLatam = aumento(precioLat, 25);

	//Bitcoin
	precioBitcoinAerolineas = dividir(precioAA, bitcoin);
	precioBitcoinLatam = dividir(precioLat, bitcoin);

	//Precio unitario
	precioUnitarioAerolineas = dividir(precioAA, km);
	precioUnitarioLatam = dividir(precioLat, km);

	//Diferencia de precio ingresada
	diferenciaDePrecios = restar(precioAA, precioLat);

	printf("\nKMs Ingresados: %d km\n\n", km );
	printf("Precio Aerol%cneas: $%d\n",161, precioAA);
	printf("Precio con tarjeta de d%cbito: $%d\n",130, precioDebitoAerolineas);
	printf("Precio con tarjeta de cr%cdito: $%.2f\n",130, precioCreditoAerolineas);
	printf("Precio pagando con bitc%cin: %f BTC\n",162, precioBitcoinAerolineas);
	printf("Precio unitario por km: $%.3f\n\n", precioUnitarioAerolineas);
	printf("Precio Latam: $%d\n", precioLat);
	printf("Precio con tarjeta de d%cbito: $%d\n",130, precioDebitoLatam);
	printf("Precio con tarjeta de cr%cdito: $%.2f\n",130, precioCreditoLatam);
	printf("Precio pagando con bitc%cin: %f BTC\n",162, precioBitcoinLatam);
	printf("Precio unitario por km: $%.3f\n\n", precioUnitarioLatam);
	printf("La diferencia de precios es: $%d\n\n", diferenciaDePrecios);
}

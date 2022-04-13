
#include <stdio.h>
#include <stdlib.h>

// FUNCION PARA MOSTRAR LOS RESULTADOS
void informarResultados(int kilometros, int precioAerolineas, int precioLatam, int debitoAA, int debitoLatam, float creditoAA, float creditoLatam, float btcAA, float btcLatam, float unitarioAA, float unitarioLatam ,int diferenciaPrecios)
{
	if(kilometros == 0 || precioAerolineas == 0 || precioLatam == 0)
	{
		printf("\nNo hay datos que mostrar.\n");
	}
	else
	{
	printf("\nKMs Ingresados: %d km\n\n", kilometros );
	printf("Precio Aerol%cneas: $%d\n", precioAerolineas, 161);
	printf("Precio con tarjeta de d%cbito: $%d\n", debitoAA, 130);
	printf("Precio con tarjeta de cr%cdito: $%.2f\n", creditoAA, 130);
	printf("Precio pagando con bitc%cin: %f BTC\n", btcAA, 162);
	printf("Precio unitario por km: $%.3f\n\n", unitarioAA);
	printf("Precio Latam: $%d\n", precioLatam);
	printf("Precio con tarjeta de d%cbito: $%d\n", debitoLatam, 130);
	printf("Precio con tarjeta de cr%cdito: $%.2f\n", creditoLatam, 130);
	printf("Precio pagando con bitc%cin: %f BTC\n", btcLatam, 162);
	printf("Precio unitario por km: $%.3f\n\n", unitarioLatam);
	printf("La diferencia de precios es: $%d\n\n", diferenciaPrecios);
	}
}

//FUNCION PARA PEDIR ENTERO Y VALIDAR UN RANGO
int pedirNumero(char mensaje[], int min, int max)
{
	int num;

	printf("%s", mensaje);
	scanf("%d", &num);

	while(num < min || num > max)
	{
		printf("\nNumero no valido. Reingrese: \n");
		scanf("%d", &num);
	}

	printf("\nDatos cargados correctamente.\n");

	return num;
}

//FUNCION PARA SELECCIONAR LAS OPCIONES DEL MENU
int opcionesDeMenu(char mensaje[])
{
	int opc;

	printf("%s", mensaje);
	scanf("%d", &opc);

	return opc;
}

#include <stdio.h>
#include <stdlib.h>
#include "funciones_aritmeticas.h"
#include "datos_y_validaciones.h"

int main(void) {
	setbuf(stdout, NULL);
		int opcion, kilometros = 0, precioAerolineas = 0, precioLatam = 0, precioDebitoAerolineas, precioDebitoLatam, diferenciaDePrecios;
		float precioUnitarioLatam, precioUnitarioAerolineas, precioCreditoAerolineas, precioCreditoLatam, precioBitcoinAerolineas, precioBitcoinLatam, bitcoin = 4606954.55;

		do
		{
			opcion = opcionesDeMenu("\n 1. Ingresar kilometros:  \n 2. Ingresar precio de vuelos:  \n 3. Calcular todos los costos:  \n 4. Informar resultados.  \n 5. Carga forzada de datos.  \n 6. Salir.");
			switch(opcion)
			{
				case 1:
					kilometros = pedirNumero("\nIngrese los Kilometros: ", 1, 20000);
					break;
				case 2:
					precioAerolineas = pedirNumero("\nIngrese el precio de Aerolineas: ", 10000, 2000000);
					precioLatam = pedirNumero("\nIngrese el precio de Latam: ", 0, 2000000);
					break;
				case 3:
					if(kilometros == 0 || precioAerolineas == 0 || precioLatam == 0)
					{
						printf("\nFaltan ingresar datos para calcular.\n");
					}
					else
					{
						precioDebitoAerolineas = descuento(precioAerolineas, 10);
						precioDebitoLatam = descuento(precioLatam, 10);
						precioCreditoAerolineas = aumento(precioAerolineas, 25);
						precioCreditoLatam = aumento(precioLatam, 25);
						precioBitcoinAerolineas = dividir(precioAerolineas, bitcoin);
						precioBitcoinLatam = dividir(precioLatam, bitcoin);
						precioUnitarioAerolineas = dividir(precioAerolineas, kilometros);
						precioUnitarioLatam = dividir(precioLatam, kilometros);
						diferenciaDePrecios = restar(precioAerolineas, precioLatam);
						printf("\nSe realizaron los c%clculos correctamente.\n", 160);
					}
					break;
				case 4:
					informarResultados(kilometros, precioAerolineas, precioLatam, precioDebitoAerolineas, precioDebitoLatam ,precioCreditoAerolineas, precioCreditoLatam, precioBitcoinAerolineas, precioBitcoinLatam, precioUnitarioAerolineas, precioUnitarioLatam, diferenciaDePrecios);
					break;
				case 5:
					cargaForzada(7090, 162965, 159339, 4606954.55);
					break;
				case 6:
					printf("\nSaliste del programa.\n");
					break;
				default:
					printf("\nOpci%cn no valida.\n",162);
					break;
			}
		}while(opcion != 6);
		return EXIT_SUCCESS;
	}


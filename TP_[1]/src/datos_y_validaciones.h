/*
 * datos_y_validaciones.h
 *
 *  Created on: 13 abr. 2022
 *      Author: nav_2
 */

#ifndef DATOS_Y_VALIDACIONES_H_
#define DATOS_Y_VALIDACIONES_H_


void informarResultados(int kilometros, int precioAerolineas, int precioLatam, int debitoAA, int debitoLatam, float creditoAA, float creditoLatam, float btcAA, float btcLatam, float unitarioAA, float unitarioLatam ,int diferenciaPrecios);
/*
@brief Recibe datos, valida que sean correctos y los muestra.
@param Recibe los valores que mostrara.
@return Retorna el valor validado y los muestra.
*/

int pedirNumero(char mensaje[], int min, int max);

/*
@brief Valida un numero dentro de un rango numerico
@param1 Recibe el numero a validar.
@param2 Recibe el mensaje de ingreso que vera el usuario.
@param3 Recibe el minimo numero posible del rango.
@param4 Recibe el maximo numero posible del rango.
@return Retorna el valor validado.
*/

int opcionesDeMenu(char mensaje[]);

/*
@brief Recibe un numero (que sera la opcion elegida).
@param Recibe el numero entero.
@return Retorna el numero ingresado.
*/

#endif /* DATOS_Y_VALIDACIONES_H_ */

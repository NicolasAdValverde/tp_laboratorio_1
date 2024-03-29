/*
 * funcionesAritmeticas.h
 *
 *  Created on: 9 abr. 2022
 *      Author: nav_2
 */

#ifndef FUNCIONES_ARITMETICAS_H_
#define FUNCIONES_ARITMETICAS_H_

int descuento(int importe, int valorADescontar);

/*
@brief Calcula el descuento de un importe.
@param A Recibe el importe a descontar.
@param B Recibe el valor a descontar.
@return Retorna el valor con descuento.
*/

float aumento(int importe, int valorAAumentar);

/*
@brief Calcula el aumento de un importe.
@param A Recibe el importe a aumentar.
@param B Recibe el valor a aumentar.
@return Retorna el valor con aumento.
*/

float sumar(float numero1, float numero2);
/*
@brief Calcula la suma de dos numeros.
@param A Recibe el primer operando.
@param B Recibe el segundo operando.
@return Retorna el valor de la suma de ambos operandos.
*/

float restar(float numero1, float numero2);

/*
@brief Calcula la resta de dos numeros positivos.
@param A Recibe el primer operando.
@param B Recibe el segundo operando.
@return Retorna el valor de la resta de ambos operandos.
*/


int multiplicar(int numero1, int numero2);
/*
@brief Calcula la multiplicacion de dos numeros.
@param A Recibe el primer operando.
@param B Recibe el segundo operando.
@return Retorna el valor de la multiplicacion de ambos operandos.
*/


float dividir(int dividendo, int divisor);

/*
@brief Calcula la division de dos numeros.
@param A Recibe el primer operando.
@param B Recibe el segundo operando.
@return Retorna el valor de la division de ambos operandos.
*/

void cargaForzada(int km, int precioAA, int precioLat, float bitcoin);

/*
@brief Reemplaza valores por defecto, calcula los costos e informa los resultados.
@param A Recibe los km.
@param B Recibe el precio de Aerolineas Argentinas.
@param B Recibe el precio de Latam.
@param B Recibe el precio del Bitcoin.
@return Retorna Los calculos echos e informa los mismos.
*/

#endif /* FUNCIONES_ARITMETICAS_H_ */

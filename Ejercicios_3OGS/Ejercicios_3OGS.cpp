// Ejercicios_3OGS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


using namespace std;
#include <iostream>
#include "Ejercicios_3OGS.h"
#include <math.h>

int main()
{
	Inicializacion();
}

void Inicializacion() {
	cout << "Ingresar numero de ejercicio: ";
	cin >> Numero;
	cout << endl;
	ElegirEjercicio();
}

void ElegirEjercicio() {
	switch (Numero)
	{
	case 1:
		Ejercicio1();
		break;
	case 2:
		Ejercicio2();
		break;
	case 3:
		Ejercicio3();
		break;
	default:
		Inicializacion();
		break;
	}
}

void CargarDatos(string Texto) {
	cout << Texto;
	cin >> Valor;
}


#pragma region Ejercicio1
//1. Dado el daño base de un personaje, realice un programa que calcule su daño crítico sabiendo que la fórmula es : DC = (daño base) ² + 80 % del daño base

void Ejercicio1() {
	cout << "Ejercicio 1" << endl;
	CargarDatos("Ingresa el danio base: ");
	cout << "El danio critico es de: "<< CalcularDanioCritico()<<endl;

}

float CalcularDanioCritico() {
	return pow(Valor, 2) + (Valor * PorcentajeDeDanio) / 100;
}

#pragma endregion


#pragma region Ejercicio2
//2. Dada la vida de un personaje, indique si es urgente curarlo o no(true / false), teniendo en cuenta que si tiene menos del 30 % debe ser curado, su vida máxima es de 150.

void Ejercicio2() {
	
	cout << "Ejercicio 2" << endl;
	CargarDatos("Ingresa la vida e un personaje: ");
	CalcularPorcentajeVida();
	if(DeboCurar())
		cout << "El personaje debe ser curado." << endl;
	else
		cout << "El personaje no debe ser curado." << endl;
}

void CalcularPorcentajeVida() {
	Vida = (VidaMaxima * PorcentajeDeVida) / 100;
	cout << "Vida  al "<< PorcentajeDeVida<<"% es de: "<< Vida<<endl;;

}

bool DeboCurar() {
	return Valor < Vida;
}

#pragma endregion


#pragma region Ejercicio3

//3. En un juego de administración de una estación de tren, se quiere saber la siguiente información sobre un tren que esta por partir para la pantalla de métricas :
//a.Si el tren que esta por partir tiene un total de vagones par(ingrese de forma manual el número de vagones).
//b.Cuantos pasajeros viajan en el tren, sabiendo que en cada vagón entran 50 personas


void Ejercicio3() {
	cout << "Ejercicio 3" << endl;
	CargarDatos("Ingresa el numero de vagones: ");
	TieneNumeroPar();
	CantidadDePasajeros();
	cout << "La cantidad de pasajeros por vagones es de "<< CantidadPasajeros << endl;
	
}

void TieneNumeroPar() {
	if (Valor % 2 == 0) cout << "Tiene un total de vagones par." << endl;
	else cout << "Tiene un total de vagones impar." << endl;
}

void CantidadDePasajeros() {
	CantidadPasajeros = Valor * PersonasPorTren;
}

#pragma endregion

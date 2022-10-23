#pragma once

#include <string>

int Valor;
int Numero;
void CargarDatos(string Texto);
void Inicializacion();
void ElegirEjercicio();

#pragma region Ejercicio1

int PorcentajeDeDanio = 80;

void Ejercicio1();
float CalcularDanioCritico();
#pragma endregion

#pragma region Ejercicio2

int VidaMaxima = 150;
int Vida;
int PorcentajeDeVida = 30;
void Ejercicio2();
void CalcularPorcentajeVida();
bool DeboCurar();
#pragma endregion

#pragma region Ejercicio3
int CantidadPasajeros;
int PersonasPorTren = 50;

void Ejercicio3();
void TieneNumeroPar();
void CantidadDePasajeros();
#pragma endregion

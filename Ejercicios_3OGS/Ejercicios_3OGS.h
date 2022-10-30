#pragma once

#include <string>

int Valor;
float ValorEjercicio;
int Numero;
int Vida;
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

#pragma region Ejercicio4

void Ejercicio4();
void IngresarNumero();
void CalcularNumeroPar();

#pragma endregion

#pragma region Ejercicio5

void Ejercicio5();
int RandomAtaque();
void ValidarAtaque(int ataque1, int ataque2);
#pragma endregion

#pragma region Ejercicio6
string NombreDb = "Marcos";
string NombreUsuario;

void Ejercicio6();
bool ValidarNombreDb();
#pragma endregion

#pragma region Ejercicio7

void Ejercicio7();
#pragma endregion

#pragma region Ejercicio8
int Golpe;
void Ejercicio8();
#pragma endregion

#pragma region Ejercicio9
int Jugador1;
int Jugador2;
int Jugador3;
void Ejercicio9();
#pragma endregion

#pragma region Ejercicio10

void Ejercicio10();
#pragma endregion

#pragma region Ejercicio11

void Ejercicio11();
#pragma endregion

#pragma region Ejercicio12
int Contador;
int ContadorExitoso;
int ContadorPuntos;
int PatadaHit;
void Ejercicio12();
#pragma endregion


#pragma region Ejercicio13
int Enemigo;
int Muerte=1;

void Ejercicio13();
#pragma endregion

#pragma region Ejercicio14
int PoderMagico = 500;
int PosEnemigo = 0;
int VidaEnemigo;
int ContadorMuertesEnemigo = 0;
int ContadorOro = 0;
void Ejercicio14();
#pragma endregion

#pragma region Ejercicio15
void Ejercicio15();
#pragma endregion
using namespace std;
#include <iostream>
#include "Ejercicios_3OGS.h"
#include <math.h>
#include <cstdlib>

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
	case 4:
		Ejercicio4();
		break;
	case 5:
		Ejercicio5();
		break;
	case 6:
		Ejercicio6();
		break;
	case 7:
		Ejercicio7();
		break;
	case 8:
		Ejercicio8();
		break;
	case 9:
		Ejercicio9();
		break;
	case 10:
		Ejercicio10();
		break;
	case 11:
		Ejercicio11();
		break;
	case 12:
		Ejercicio12();
		break;
	case 13:
		Ejercicio13();
		break;
	case 14:
		Ejercicio14();
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

#pragma region Ejercicio4

//4. En el sistema interno de un juego de estrategia, se genera un número entero positivo que se usa para determinar el camino que tomara una IA.
//Debemos indicar si el número ingresado es par, ya que de serlo la IA tomara una acción diferente a la estipulada de forma convencional.

void Ejercicio4() {
	cout << "Ejercicio 4" << endl;
	IngresarNumero();
	CalcularNumeroPar();
}

void CalcularNumeroPar() {
	if ((int)ValorEjercicio % 2 == 0) cout << "Tiene un valor par." << endl;
	else cout << "Tiene un valor impar." << endl;
}

void IngresarNumero() {
	do
	{
		cout << "Ingresa un entero y positivo: ";
		cin >> ValorEjercicio;
	} while ((ValorEjercicio < 0) || (ValorEjercicio - (int)ValorEjercicio > 0));
}

#pragma endregion

#pragma region Ejercicio5

//5. En un juego de cartas donde existen criaturas que tienen un determinado ataque, tenemos la situación en la que dos de estos se ven enfrentados y 
//se tiene que indicar lo siguiente : 
//a.Si el ataque de las dos es igual : “Se destruyeron ambas criaturas.” 
//b.Si el ataque del primero es mayor al del segundo : “El primero aniquilo al segundo.” 
//c.Si el ataque del segundo es mayor al del primero : “El segundo aniquilo al primero.”


void Ejercicio5() {
	cout << "Ejercicio 5" << endl;

	int Player1 = RandomAtaque();
	cout << "Ataque del jugador 1: "<< Player1;
	int Player2 = RandomAtaque();
	cout<<endl << "Ataque del jugador 2: "<<Player2;

	ValidarAtaque(Player1, Player2);

}


void ValidarAtaque(int Ataque1, int Ataque2) {
	if (Ataque1 == Ataque2) {
		cout << "Se destruyeron ambas criaturas." << endl;
	}
	else if(Ataque1 > Ataque2)
	{
		cout << "El primero aniquilo al segundo." << endl;
	}
	else
	{
		cout << "El segundo aniquilo al primero." << endl;
	}
}

int RandomAtaque() {
	return rand() % 10;
}


#pragma endregion

#pragma region Ejercicio6
//6. Estamos desarrollando un juego que tiene un sistema de log interno y necesitamos comprobar si el nombre de usuario ingresado es igual al de la base de datos.En caso de serlo indicar
//<“Hola” mas su nombre de usuario>.Caso contrario indicar “El nombre de usuario no es correcto.”

void Ejercicio6() {
	cout << "Ejercicio 6" << endl;

	cout << "Ingresar nombre de usuario: ";
	cin >> NombreUsuario;
	if (ValidarNombreDb()) {
		cout << "El nombre de usuario no es correcto." << endl;
	}
	else
	{
		cout << "Hola "<< NombreUsuario << endl;
	}

}

bool ValidarNombreDb() {
	if (NombreDb != NombreUsuario) return true;
	else return false;
}


#pragma endregion

#pragma region Ejercicio7
//7. En un juego donde se define al ganador según los puntos que adquiere durante la partida,
//existe un potenciador de puntos que aparece una sola vez por partida y cuyo efecto es multiplicar por tres los puntos actuales del jugador y sumarle la mitad de sus puntos originales.
//Tenga en cuenta que el potenciador solo surte efecto si el jugador tiene por lo menos 250 puntos.

void Ejercicio7() {
	cout << "Ejercicio 7" << endl;



}

#pragma endregion

#pragma region Ejercicio8
//8. Se quiere verificar si un personaje está vivo después de recibir un golpe, esto se hace bajo la siguiente premisa : 
//si la vida del personaje es positiva indicar que esta vivo, si es negativa indicar que está muerto, pero si es cero debe indicar que esta en el limbo luchando por su vida.
//Considere el valor de la vida de forma aleatoria entre - 25 y 100.

void Ejercicio8() {
	cout << "Ejercicio 8" << endl;
	cout << "Ingresar el golpe: ";cin >> Golpe;
	Vida = ((rand() % ((100-25) + 1)) + 25)-Golpe;
	cout << "La vida del personaje es " << Vida<<endl;

	if (Vida > 0) {
		cout << "El personaje esta vivo.";
	}
	else if(Vida < 0)
	{
		cout << "El personaje esta muerto.";
	}
	else
	{
		cout << "El personaje quedo en el limbo.";
	}
}

#pragma endregion

#pragma region Ejercicio9
//9. En un juego cooperativo de tres jugadores, al finalizar la expedición se debe comprobar cual de los tres obtuvo más oro, siendo que cada uno puede tener entre 50 y 200 de oro.
//Indicar cual obtuvo más.
void Ejercicio9() {
	cout << "Ejercicio 9" << endl;
	Jugador1 = ((rand() % ((200 - 50) + 1)) + 50);
	Jugador2 = ((rand() % ((200 - 50) + 1)) + 50);
	Jugador3 = ((rand() % ((200 - 50) + 1)) + 50);

	if (Jugador1>Jugador2) {
		if (Jugador1 > Jugador3) {
			cout << "El jugador 1 es el que obtubo mas oro";
		}
	}
	else if(Jugador2 > Jugador3)
	{
		cout << "El jugador 2 es el que obtubo mas oro";
	}
	else
	{
		cout << "El jugador 3 es el que obtubo mas oro";
	}

}
#pragma endregion

#pragma region Ejercicio10
//10. En el mismo juego del ejercicio anterior, al finalizar la partida se muestra a los jugadores y el nivel que alcanzaron, el cual es aleatorio entre 2 y 10. 
//Indicar si se muestran ordenados de forma creciente, decreciente, si todos tienen el mismo nivel o si no se respeta ningun tipo de orden.

void Ejercicio10() {
	cout << "Ejercicio 10" << endl;
	Jugador1 = ((rand() % ((10 - 2) + 1)) + 2);
	Jugador2 = ((rand() % ((10 - 2) + 1)) + 2);
	Jugador3 = ((rand() % ((10 - 2) + 1)) + 2);

	cout << "Nivel del jugador 1 " << Jugador1 << endl;
	cout << "Nivel del jugador 2 " << Jugador2 << endl;
	cout << "Nivel del jugador 3 " << Jugador3 << endl;

	if (Jugador1 == Jugador2== Jugador3) {
		cout << "Todos los jugadores tienen el mismo nivel.";
	}
	else if(Jugador1 > Jugador2 && Jugador2 > Jugador3)
	{
		cout << "Se encuentra ordenados de forma decreciente.";

	}
	else if (Jugador3 > Jugador2> Jugador1)
	{
		cout << "Se encuentra ordenados de forma creciente.";
	}
	else
	{
		cout << "No se respeta ningun tipo de orden.";
	}

}
#pragma endregion

#pragma region Ejercicio11

//11. En un juego de dúos, se usa un algoritmo que revisa los puntos de los jugadores del equipo para otorgarles, en el caso de que corresponda, un bonus.Dicho algoritmo comprueba lo siguiente :
//a.Si ambos puntajes son pares o si el primero es par y el segundo impar, indicar “bonus conseguido” y sumarle a cada jugador un 5 % de sus puntos.
//b.Caso contrario indicar “el bonus no fue otorgado”.
//c.Considere que los puntos de cada jugador varían entre 1000 y 2500

void Ejercicio11() {
	cout << "Ejercicio 11" << endl;
	Jugador1 = ((rand() % ((2500 - 1000) + 1)) + 1000);
	Jugador2 = ((rand() % ((2500 - 1000) + 1)) + 1000);
	if ((Jugador1 % 2 == 0 && Jugador2 % 2 == 0) || (Jugador1 % 2 == 0 && Jugador2 % 2 != 0)) {
		cout << "Bonus conseguido" << endl;
		cout <<"El jugador uno tiene ahora "<< (Jugador1 * 5) / 100 << endl;
		cout <<"El jugador dos tiene ahora "<< (Jugador2 * 5) / 100 << endl;
	}
	else
	{
		cout << "El bonus no fue otorgado" << endl;
	}
}
#pragma endregion

#pragma region Ejercicio12

//12. En Street Fighter Chun Li pega 10 patadas consecutivas, cada patada pega un daño que varia entre 10 y 15, 
//hay un 20 % de chances de que el contrincante bloquee cada patada realizando un 5 % del daño solamente.
//a.Indicar cuantos ataques exitosos hubo.
//b.Indicar cual fue el daño final
//c.En caso de una patada sea bloqueada indicar “Ataque bloqueado”.
//d.En todos los casos imprimir el daño realizado.
void Ejercicio12() {
	cout << "Ejercicio 12" << endl;
	Contador = 0;
	ContadorExitoso = 0;
	ContadorPuntos = 0;
	while (Contador <10)
	{
		PatadaHit = 10 + (rand() % 15);

		if ((rand() % 100)<20) {
			PatadaHit = (PatadaHit * 5) / 100;
			cout << "Ataque bloqueado" << endl;
		}
		else
		{
			ContadorExitoso++;
		}
		ContadorPuntos += PatadaHit;
		
		Contador++;
		cout << "El daño del turno "<< Contador << " fue de "<< PatadaHit << endl;
	}
	cout <<"Cantidad de ataques exitosos: " << ContadorExitoso << endl;
	cout <<"Cantidad final: " << ContadorPuntos << endl;
}

#pragma endregion

#pragma region Ejercicio13

//13. En un juego de estrategia una IA calcula la cantidad de posibilidades que tiene de perder, sabiendo que esa cantidad aumenta a medida que hay más enemigos.
//Para ello realiza un cálculo sencillo : La cantidad de chances de morir es igual al factorial del número de enemigos que hay en pantalla.
//Sabiendo que hay un mínimo de 0 enemigos y un máximo de 7, indicar cuantas chances de perder tiene.
//El factorial de un entero positivo n, el factorial de n o n factorial se define en principio como el producto de todos los números enteros positivos 
//desde 1 (es decir, los números naturales) hasta n inclusive.
//Por ejemplo : Factorial de 0 = 1 Factorial de 1 = 1 Factorial de 2 = 1x2 = 2 Factorial de 3 = 1x2x3 = 6 Factorial de 4 = 1x2x3x4 = 24 Factorial de 5 = 1x2x3x4x5 = 120 Factorial de 6 = 1x2x3x4x5x6 = 720 Factorial de 6 = 1x2x3x4x5x6x7 = 5040

void Ejercicio13() {

	cout << "Ejercicio 13" << endl;
	Enemigo = (rand() % 7);

	for (int item = 1; item <= Enemigo; item++) {
		Muerte *= item;
	}
	cout << "Cantidad de enemigos: "<<Enemigo << endl;
	cout << "Chances de Morir: "<<Muerte << endl;

}




#pragma endregion

#pragma region Ejercicio14

//14. En un Moba, en una partida de 10 vs 10, un personaje utiliza el skill “Mas fruta que khartuz”, el skill tiene la siguiente descripción : 
// “El personaje invoca un halo de energía que afecta a aquellos enemigos que estén dentro de los 20m de distancia, 
// si el enemigo es afectado por el halo de energía recibirá daño verdadero que equivale al 50 % de su vida actual sumado a un daño base equivalente al 300 % del daño mágico del personaje.
// En caso de morir el enemigo otorgara a todos rivales una cantidad de oro igual al daño realizado”.Sabiendo que : · los 10 enemigos rivales tienen una vida que varia entre 200 y 3000 · 
// El poder mágico del personaje es de 500. · Los enemigos se encuentran en un rango de 5 a 40m.
//Indicar :
//	a.¿Cuántos rivales murieron ?
//	b.¿Cuánto oro recibió nuestro equipo ?
//	c.En caso de que el enemigo no este en rango indicar “El enemigo no está en rango”.
//	d.En caso de que el enemigo este en rango, indicar cuanto daño recibirá, en caso de que el enemigo muera, indicar que murió.


void Ejercicio14() {
	cout << "Ejercicio 14" << endl;

	for (int i = 1; i <= 10; i++)
	{
		VidaEnemigo = 200 + (rand() % 3000);
		PosEnemigo = 5 + (rand() % 40);
		cout << "Vida del enemigo " << i << " es de " << VidaEnemigo << endl;
		if (PosEnemigo <= 20) {
			int danio = (VidaEnemigo / 2 + (PoderMagico * 300) / 100);
			cout << "Danio recibido al enemigo  " << i << " es de " << danio << endl;
			VidaEnemigo = VidaEnemigo - danio;
			if (VidaEnemigo <= 0) {
				ContadorMuertesEnemigo++;
				cout << "El enemigo " << i << " murio" << endl;;
				for (int j = 1; j <= 10; j++)
				{
					ContadorOro = ContadorOro + danio;
				}
			}
		}
		else
		{
			cout << "El enemigo no está en rango" << endl;;
		}
		
	}
	cout << "Murieron " << ContadorMuertesEnemigo << " enemigos" << endl;;
	cout << "El oro total es de " << ContadorOro << endl;;
	
}



#pragma endregion

#pragma region Ejercicio15

//15. En un tower defence una torreta puede disparar las siguientes municiones : balas de 55mm : con un rango de 0 a 200m y un daño de 25 a 50. - 
//Morteros : con un rango de 400m a 1000m y un daño entre 100 y 500. 
// 
//Se van a producir 10 ataques en 10 momentos distintos · 
//La cantidad de enemigos va a incrementar en 5 según el numero en cada ataque, quedando la cantidad de enemigo en : 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 · 
// Las enemigas contaran con una vida que va de 200 a 300 puntos. · 
// El rango de distancia de cada enemigo varía entre 100m a 1200m. Sabiendo esto, resolver:
// 
//a.Indicar cuando Inicia y cuando finaliza un ataque
//b.Indicar cuantos enemigos fueron alcanzados por balas de 55mm en cada ataque.
//c.Indicar cuantos enemigos fueron alcanzados por morteros en cada ataque
//d.Indicar cuantos enemigos murieron en cada ataque 
//e.Indicar cuantos enemigos sobrevivieron en cada ataque
//f.Al finalizar las 10 oleadas, indicar cuantos enemigos murieron en total.
//g.Al finalizar las 10 oleadas indicar, cuantas balas de 55m y morteros se dispararon


void Ejercicio15() {

	cout << "Ejercicio 15" << endl;

	int disparoARangoInicio = 200;

	int disparoBRangoInicio = 400;
	int disparoBRangoFinal = 1000;

	int CantidadDeEnemigoAlcanzados55 = 0;
	int CantidadDeEnemigoAlcanzadosMorteros = 0;

	for (int ataques = 1; ataques <= 10; ataques++)
	{
		int danioA = 25+(rand() % 50);
		int danioB= 100 + (rand() % 500);

		for (int  enemi = 1; enemi <= (ataques*5); enemi++)
		{
			int vidaEnemigo = 200 + (rand() % 300);
			int enemigosRango = 100 + (rand() % 1200);

			if (enemigosRango <= disparoARangoInicio) {
				cout << "Enemigo alcanzado por balas 55mm en ataque " << ataques << endl;
				CantidadDeEnemigoAlcanzados55++;
			}

			if (enemigosRango >= disparoBRangoInicio && enemigosRango <= disparoBRangoFinal) {
				cout << "Enemigo alcanzado por Morteros en ataque " << ataques << endl;
				CantidadDeEnemigoAlcanzadosMorteros++;
			}
		}

	}
	cout << "Cantidad de enemigos alcanzados por balas 55mm es de " << CantidadDeEnemigoAlcanzados55 << endl;
	cout << "Cantidad de enemigos alcanzados por morteros es de " << CantidadDeEnemigoAlcanzadosMorteros << endl;
}

#pragma endregion

	
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

//clase para representar las ciudades
class Punto
{
	public:
		string nombre;
		//int num;
		vector <string> rutas;
		//bool visitado;
};

//clase para almacenar la informacion de los caminos entre las ciudades
class Camino
{
	public:
		string camino;
		int distanciaTotal;
};


int cn = 9; //cantidad de ciudades
int rutaOrigen =-1; // las rutas estan representadas desde el 0 al 8 ya que son 9 rutas.
vector<vector <int>> distancias; // matriz de distancias que se encontraban en excel
vector<Camino> caminos; // vector donde se almacenan todos los caminos posibles para luego elegir el optimo
vector<Punto> Puntos; // arreglo de las 9 ciudades especificadas

//inicializa la informacion de la ciudades y sus interconexiones
void inicializarCiudades()
{
	string rutas[] = {"106"};
	vector<string> vACAHUALINCA (std::begin (rutas), std::end (rutas));
	Punto pACAHUALINCA;
	pACAHUALINCA.nombre = "ACAHUALINCA";
	pACAHUALINCA.rutas = vACAHUALINCA;
	Puntos.push_back(pACAHUALINCA);
}


//funcion principal del programa
int main()
{

	inicializarCiudades();


	system("pause");
}

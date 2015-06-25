#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

//clase para representar las ubicaciones
class Ubicacion
{
	public:
		string nombre;
		//int num;
		vector <string> rutas;
		bool visitado;
	Ubicacion()
	{
		visitado = false;
	}
};

//clase para almacenar la informacion de los caminos entre las ciudades
class Camino
{
	public:
		string camino;
		int distanciaTotal;
};


int cn = 15; //cantidad de ubicaciones
int ubicacionOrigen =-1;
int ubicacionDestino =-1;
vector<Camino> caminos; // vector donde se almacenan todos los caminos posibles para luego elegir el optimo
Ubicacion ubicaciones[15]; // arreglo de las 15 ubicaciones especificadas

//inicializa la informacion de la ciudades y sus interconexiones
void inicializarUbicaciones()
{

	/* BEGIN */
	Ubicacion p1;
	p1.nombre = "Siete Sur";
	string p1rutas[] = {
		"6"
		,"103"
		, "106"
		, "110"
		, "112"
		, "114"
		, "120"
		, "123"
		, "125"
		, "154"
		, "210" };

	vector<string> vp1(std::begin(p1rutas), std::end(p1rutas));
	p1.rutas = vp1;
	ubicaciones[0] = p1;
	/*End*/

	/* BEGIN */
	Ubicacion p2;
	p2.nombre = "El Zumen";
	string p2rutas[] = {
		"6"
		, "105"
		, "106"
		, "107"
		, "110"
		, "112"
		, "118"
		, "120"
		, "158"
		, "210"
		, "261 - MR4" };

	vector<string> vp2(std::begin(p2rutas), std::end(p2rutas));
	p2.rutas = vp2;
	ubicaciones[1] = p2;
	/*End*/

	/* BEGIN */
	Ubicacion p3;
	p3.nombre = "Rotonda el Periodista";
	string p3rutas[] = {
		"104"
		, "119"
		, "195"
		, "110"
		, "120"
		, "106"
		, "114"
		, "103"
		, "105"
		, "210" };

	vector<string> vp3(std::begin(p3rutas), std::end(p3rutas));
	p3.rutas = vp3;
	ubicaciones[2] = p3;
	/*End*/

	/* BEGIN */
	Ubicacion p4;
	p4.nombre = "Rotonda El Gueguense";
	string p4rutas[] = {
		"102"
		, "119"
		, "118"
		, "104"
		, "158"
		, "195" };

	vector<string> vp4(std::begin(p4rutas), std::end(p4rutas));
	p4.rutas = vp4;
	ubicaciones[3] = p4;
	/*End*/

	/* BEGIN */
	Ubicacion p5;
	p5.nombre = "Rotonda Plaza Inter";
	string p5rutas[] = {
		"107"
		, "109"
		, "113"
		, "116"
		, "118"
		, "154"
		, "167"
		, "261 - MR4" };

	vector<string> vp5(std::begin(p5rutas), std::end(p5rutas));
	p5.rutas = vp5;
	ubicaciones[4] = p5;
	/*End*/

	/* BEGIN */
	Ubicacion p6;
	p6.nombre = "UCA";
	string p6rutas[] = {
		"102"
		, "103"
		, "105"
		, "110"
		, "111"
		, "114"
		, "117"
		, "119"
		, "120"
		, "168"
		, "195"
		, "210" };

	vector<string> vp6(std::begin(p6rutas), std::end(p6rutas));
	p6.rutas = vp6;
	ubicaciones[5] = p6;
	/*End*/

	/* BEGIN */
	Ubicacion p7;
	p7.nombre = "Rotonda Metrocentro";
	string p7rutas[] = {
		"102"
		, "105"
		, "114"
		, "119"
		, "120"
		, "168"
		, "195"
		, "210" };

	vector<string> vp7(std::begin(p7rutas), std::end(p7rutas));
	p7.rutas = vp7;
	ubicaciones[6] = p7;
	/*End*/

	/* BEGIN */
	Ubicacion p8;
	p8.nombre = "Rotonda Cristo Rey";
	string p8rutas[] = {
		"102"
		, "105"
		, "11"
		, "261 - MR4" };

	vector<string> vp8(std::begin(p8rutas), std::end(p8rutas));
	p8.rutas = vp8;
	ubicaciones[7] = p8;
	/*End*/

	/* BEGIN */
	Ubicacion p9;
	p9.nombre = "Rotonda Universitaria";
	string p9rutas[] = {
		"106"
		, "117"
		, "168" };

	vector<string> vp9(std::begin(p9rutas), std::end(p9rutas));
	p9.rutas = vp9;
	ubicaciones[8] = p9;
	/*End*/

	/* BEGIN */
	Ubicacion p10;
	p10.nombre = "Rotonda la centroamerica";
	string p10rutas[] = {
		"106"
		, "117"
		, "Los Vanegas" };

	vector<string> vp10(std::begin(p10rutas), std::end(p10rutas));
	p10.rutas = vp10;
	ubicaciones[9] = p10;
	/*End*/

	/* BEGIN */
	Ubicacion p11;
	p11.nombre = "Rotonda La Virgen";
	string p11rutas[] = {
		"123" };

	vector<string> vp11(std::begin(p11rutas), std::end(p11rutas));
	p11.rutas = vp11;
	ubicaciones[10] = p11;
	/*End*/

	/* BEGIN */
	Ubicacion p12;
	p12.nombre = "Rotonda Bello Horizonte";
	string p12rutas[] = {
		"6"
		, "102"
		, "111"
		, "116"
		, "154"
		, "168"
		, "261 - MR4" };

	vector<string> vp12(std::begin(p12rutas), std::end(p12rutas));
	p12.rutas = vp12;
	ubicaciones[11] = p12;
	/*End*/

	/* BEGIN */
	Ubicacion p13;
	p13.nombre = "La Subasta";
	string p13rutas[] = {
		"105"
		, "111"
		, "117"
		, "170"
		, "266" };

	vector<string> vp13(std::begin(p13rutas), std::end(p13rutas));
	p13.rutas = vp13;
	ubicaciones[12] = p13;
	/*End*/

	/* BEGIN */
	Ubicacion p14;
	p14.nombre = "Gancho de Camino";
	string p14rutas[] = {
		"101"
		, "102"
		, "111"
		, "116"
		, "118"
		, "154"
		, "158"
		, "164"
		, "165"
		, "168"
		, "172"
		, "195"
		, "261 - MR4" };

	vector<string> vp14(std::begin(p14rutas), std::end(p14rutas));
	p14.rutas = vp14;
	ubicaciones[13] = p14;
	/*End*/

	/* BEGIN */
	Ubicacion p15;
	p15.nombre = "Mercado Huembes";
	string p15rutas[] = {
		"104"
		, "106"
		, "109"
		, "110"
		, "117"
		, "119"
		, "123"
		, "159"
		, "164"
		, "165"
		, "195"
		, "261 - MR4"
		, "262" };

	vector<string> vp15(std::begin(p15rutas), std::end(p15rutas));
	p15.rutas = vp15;
	ubicaciones[14] = p15;
	/*End*/

}

//guarda un posible camino como el mas corto en el vector de caminos
void guardarCamino(string camino, int distanciaTotal)
{
	Camino caminoAGuardar;
	caminoAGuardar.camino = camino;
	caminoAGuardar.distanciaTotal = distanciaTotal;

	caminos.push_back(caminoAGuardar);
}
//funcion recursiva que encuentra el camino mas corto entre la ciudad origen y destino
void buscarCaminoMasCorto(int a/*origen*/, int z/*destino*/, int p/*ultima ubicaiones consultada*/,int distanciaTotal, string camino)
{
	Ubicacion* actual = &ubicaciones[a];
	Ubicacion* destino = &ubicaciones[z];
	actual -> visitado = true;
	if(a == z)
	{
		guardarCamino(camino, distanciaTotal);
		return;
	}
	
	for(int x = p; x < cn; x ++)
	{
		if(x != a)
		{
			Ubicacion* posibleUbicacion = &ubicaciones[x];
			for(unsigned int i=0; i < actual->rutas.size();i++)
			{
				for(unsigned int j=0; j < posibleUbicacion->rutas.size();j++)
				{
					if(actual->rutas[i] == posibleUbicacion->rutas[j]
						&& posibleUbicacion->visitado == false)
					{
						string caminoBackUp = camino;
						camino += "En (" + actual->nombre + ") tomar ruta " + actual->rutas[i] + " hasta (" + posibleUbicacion->nombre + "),";
						buscarCaminoMasCorto(x,z,x,distanciaTotal+1, camino);
						camino = caminoBackUp;
					}
				}
			}
			posibleUbicacion -> visitado = false;
		}
	}
}


// imprime el camino mas corto
void imprimirElCaminoMasCorto()
{
	int elMasCorto;
	int minimo = 99999;
	for(unsigned int i =0; i< caminos.size(); i++)
	{
		if(caminos[i].distanciaTotal < minimo)
		{
			elMasCorto = i;
			minimo = caminos[i].distanciaTotal;
		}
	}
	cout << "Las instrucciones a seguir para llegar de manera eficiente al destino son: "<< caminos[elMasCorto].camino
			<< " y el numero de transbordos seran " <<caminos[elMasCorto].distanciaTotal-1<<endl; 
}
//lee la ubicacion origen especificada por el usuario
void leerUbicacionInicio()
{
	cout << "Por favor, introduzca el numero de la ubicacion origen: ";
	cin >> ubicacionOrigen;
	ubicacionOrigen--;
}
//lee la ubicacion destino especificada por el usuario
void leerUbicacionDestino()
{
	cout << "Por favor, introduzca el numero de la ubicacion destino: ";
	cin >> ubicacionDestino;
	ubicacionDestino--;
}
//imprime las rutas del punto origen
void imprimirRutasPuntoOrigen(int a)
{
	Ubicacion* ubicacion = &ubicaciones[a];
	cout << "Las rutas disponibles para el punto origen(" << ubicacion->nombre <<") son las siguientes: " <<endl;
	for(unsigned int i = 0; i < ubicacion -> rutas.size();i++)
	{
		cout << ubicacion -> rutas[i] << ", ";
	}
	cout << endl;
}
//imprime las rutas del punto destino
void imprimirRutasPuntoDestino(int a)
{
	Ubicacion* ubicacion = &ubicaciones[a];
	cout << "Las rutas disponibles para el punto destino(" << ubicacion->nombre <<") son las siguientes: " <<endl;
	for(unsigned int i = 0; i < ubicacion -> rutas.size();i++)
	{
		cout << ubicacion -> rutas[i] << ", ";
	}
	cout << endl;
}
//funcion principal del programa
int main()
{
	inicializarUbicaciones();
	cout << "Bienvenido a Viaje eficiente, las ubicaciones disponibles son las siguientes:" << endl;
	cout << endl;
	for(int i=0; i< cn; i++)
	{
		cout << i+1 << ". " << ubicaciones[i].nombre<< ". "<< endl;
	}
	cout << endl;
	leerUbicacionInicio();
	cout << endl;
	leerUbicacionDestino();
	cout << endl;

	if((ubicacionOrigen >=0 && ubicacionOrigen<=14)
		&& (ubicacionDestino >=0 && ubicacionDestino<=14))
	{
		buscarCaminoMasCorto(ubicacionOrigen, ubicacionDestino,0, 0, "");
		cout << endl;
		imprimirRutasPuntoOrigen(ubicacionOrigen);
		cout << endl;
		imprimirRutasPuntoDestino(ubicacionDestino);
		cout << endl;
		imprimirElCaminoMasCorto();
	}else
	{
		cout << endl;
		cout << "Se ha producido un error, por favor introduzca algun valor correspondiente al menu." << endl;
	}
	//system("pause");
}

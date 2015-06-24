#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

//clase para representar las ciudades
class Ubicacion
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
vector<Ubicacion> Ubicaciones; // arreglo de las 9 ciudades especificadas

//inicializa la informacion de la ciudades y sus interconexiones
void inicializarUbicaciones()
{

	/* BEGIN */
	Ubicacion p1;
	p1.nombre = "Siete Sur";
	string p1rutas[] = {
		"103"
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
	Ubicaciones.push_back(p1);
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
	Ubicaciones.push_back(p2);
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
	Ubicaciones.push_back(p3);
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
	Ubicaciones.push_back(p4);
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
	Ubicaciones.push_back(p5);
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
	Ubicaciones.push_back(p6);
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
	Ubicaciones.push_back(p7);
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
	Ubicaciones.push_back(p8);
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
	Ubicaciones.push_back(p9);
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
	Ubicaciones.push_back(p10);
	/*End*/

	/* BEGIN */
	Ubicacion p11;
	p11.nombre = "Rotonda La Virgen";
	string p11rutas[] = {
		"123" };

	vector<string> vp11(std::begin(p11rutas), std::end(p11rutas));
	p11.rutas = vp11;
	Ubicaciones.push_back(p11);
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
	Ubicaciones.push_back(p12);
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
	Ubicaciones.push_back(p13);
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
	Ubicaciones.push_back(p14);
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
	Ubicaciones.push_back(p15);
	/*End*/

}

//funcion principal del programa
int main()
{

	inicializarUbicaciones();


	system("pause");
}

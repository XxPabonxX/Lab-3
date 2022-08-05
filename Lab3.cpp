#include <iostream>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <string.h>
#include <bitset>

using namespace std;

int main() {

	ifstream fin;
	int opcion = 0, opcion2 = 0, semilla = 0, indice = 0;
	char str[256]; for (int i = 0; i < 256; i++) {
		str[i] = 'x';
	}

	do {

		cout << "Selecione una opcion: " << endl;
		cout << "1. Para el modo administrador." << endl;
		cout << "2. Usuario." << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion2;

	} while (opcion2 != 1 && opcion2 != 2);


	do {

		cout << "Ingrese el metodo de codificacion a emplear: " << endl;
		cout << "1. Para el primer metodo." << endl;
		cout << "2. Para el segundo metodo." << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion2;

	} while (opcion2 != 1 && opcion2 != 2);

	cout << endl << "Ingrese la semilla: ";
	cin >> semilla;

	switch (opcion) {

	case 1:

		fin.open("archivo.txt");

		if (fin.is_open()) {

			cout << "Abierto" << endl;

		}

		while (fin.good()) {

			fin.getline(str, 256);

		}

		fin.close();

		for (int i = 0; str[i] != 'x'; i++) {

			indice = str[i];
			bitset<8> bs4(indice);
			cout << bs4;

		}

		break;

	case 2:

		fin.open("archivo.txt");

		if (fin.is_open()) {

			cout << "Abierto" << endl;

		}

		while (fin.good()) {

			fin.getline(str, 256);

		}

		for (int i = 0; str[i] != 'x'; i++) {



		}

		fin.close();

		break;

	default:

		break;

	}

	return 0;

}
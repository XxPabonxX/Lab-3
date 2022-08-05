#include <iostream>

#ifdef _win32

#include <windows.h>

#endif

using namespace std;

int limpiar_pantalla(void);
int menu(void);
int Administrador(void);
int Usuario(void);

int main() {

	int opcion = 0, opcion2 = 0;

	do {

		opcion = menu();
		limpiar_pantalla();

		switch (opcion) {

		case 1:

			do{

			opcion2 = Administrador();
			limpiar_pantalla();

			} while (opcion2 != 3);

			break;

		case 2:

			do {

			opcion2 = Usuario();
			limpiar_pantalla();

			} while (opcion2 != 3);

			break;

		default:

			break;

		}

	} while (opcion != 3);

	return 0;

}

int limpiar_pantalla(void) {

#ifdef _WIN32

	system("cls");

#else

	system("clear");

#endif

	return 0;

}

int menu(void) {

	int opcion = 0;

	cout << "Selecione una opcion: " << endl << endl;
	cout << "1. Para el modo administrador." << endl;
	cout << "2. Para el modo usuario." << endl;
	cout << "3. Para finalizar el programa." << endl << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;



	return opcion;

}

int Administrador(void) {

	int opcion = 0;

	char contrasena[] = "", usuario[] = "";

	cout << endl << "Ingrese usuario: ";
	cin >> usuario;

	cout << endl << "Ingrese contraseña: ";
	cin >> contrasena;

	cout << endl << endl << "Selecione una opcion: " << endl;
	cout << "1. Registrar usuario." << endl;
	cout << "2. ver usuarios registrados." << endl;
	cout << "3. volver al menu ." << endl << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;

	switch (opcion) {

	case 1:

		do {


		} while (1);

		break;

	case 2:

		do {



		} while (2);

		break;

	default:

		break;

	}

	return opcion;

}

int Usuario(void) {

	int opcion = 0;

	cout << endl << "Selecione una opcion: " << endl;
	cout << "1. Consultar datos." << endl;
	cout << "2. Retirar saldo." << endl;
	cout << "3. volver al menu." << endl << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;

	switch (opcion) {

	case 1:

		do {


		} while (1);

		break;

	case 2:

		do {
			


		} while (2);

		break;

	default:

		break;

	}

	return opcion;

}
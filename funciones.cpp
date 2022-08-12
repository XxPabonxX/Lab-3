#include "funciones.h"

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

	limpiar_pantalla();

	/*

	Codificacion y descodificacion

	*/

	cout << "Selecione una opcion: " << endl << endl;
	cout << "1. Registrar usuario." << endl;
	cout << "2. ver usuarios registrados." << endl;
	cout << "3. volver al menu ." << endl << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;

	return opcion;

}

int registrar_usuario(void) {

	return 0;

}

int ver_usuarios(void) {

	return 0;

}


int Usuarios(void) {

	int opcion = 0;

	char contrasena[] = "", usuario[] = "";

	cout << endl << "Ingrese usuario: ";
	cin >> usuario;

	cout << endl << "Ingrese contraseña: ";
	cin >> contrasena;

	limpiar_pantalla();

	cout << "Selecione una opcion: " << endl << endl;
	cout << "1. Retirar dinero." << endl;
	cout << "2. Consultar saldo" << endl;
	cout << "3. volver al menu ." << endl << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;

	return opcion;

}

int retirar_dinero(void) {

	return 0;

}

int ver_saldo(void) {

	return 0;

}
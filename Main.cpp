#include "funciones.h"

int main() {

	int opcion = 0, opcion2 = 0;

	do{

		opcion = menu();
		limpiar_pantalla();

		switch (opcion){

		case 1: 

			do{

				opcion2 = Administrador();
				limpiar_pantalla();

				switch (opcion2){

				case 1:

					registrar_usuario();
					limpiar_pantalla();

					break;

				case 2: 

					ver_usuarios();
					limpiar_pantalla();

					break;

				default:

					break;

				}

			} while (opcion2 != 3);

			break;

		case 2:

			do {

				opcion2 = Usuarios();
				limpiar_pantalla();

				switch (opcion2) {

				case 1:

					retirar_dinero();
					limpiar_pantalla();

					break;

				case 2:

					ver_saldo();
					limpiar_pantalla();

					break;

				default:

					break;

				}

			} while (opcion2 != 3);

			break;

		default:

			break;

		}

	} while (opcion != 3);

	return 0;

}
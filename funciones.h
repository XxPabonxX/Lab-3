#pragma once

#include "funciones.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <bitset>

#ifdef _win32

#include <windows.h>

#endif

using namespace std;

int limpiar_pantalla(void);
int menu(void);

int Administrador(void);
int registrar_usuario(void);
int ver_usuarios(void);

int Usuarios(void);
int retirar_dinero(void);
int ver_saldo(void)
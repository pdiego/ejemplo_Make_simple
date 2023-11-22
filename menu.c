#include <stdio.h>
#include "menu.h"

int menu()
{
		#ifdef WINDOWS
		system("CLS"); //Limpia la pantalla en cada nueva operación.
		#endif
		printf("CALCULADORA\n\n");
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("5. Salir\n\n");
}


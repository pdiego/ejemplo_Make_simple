/* Programa: Menú calculadora de números enteros */

#include <stdio.h>
#include "menu.h"
#include "sumar.h"

int main()
{

	int eleccion,operador1,operador2;

	/*Empezamos usando un bucle do while para que el programa se ejecute hasta que el usuario seleccione la opcion 5*/
	do
	{
		menu();

		scanf("%d",&eleccion);

		/*Usamos un switch como altenativa multiple para ejecutar la parte correspondiente a la elección del usuario*/

		switch(eleccion)
		{
			case 1:
				printf("Resultado: %d\n", sumar());
				break;

			case 2:
				printf("Introduce un numero: ");
				scanf("%d",&operador1);
				printf("Introduce otro numero: ");
				scanf("%d",&operador2);
				printf("Resultado: %d\n",operador1-operador2);
				break;

			case 3:
				printf("Introduce un numero: ");
				scanf("%d",&operador1);
				printf("Introduce otro numero: ");
				scanf("%d",&operador2);
				printf("Resultado: %d\n",operador1*operador2);
				break;

			case 4:
				printf("Introduce un numero: ");
				scanf("%d",&operador1);
				printf("Introduce otro numero: ");
				scanf("%d",&operador2);

				/*Ponemos la condicion de que no se pueda dividir entre 0 ya que de lo contrario el programa dará error*/
				if(operador2==0)
				{
					printf("No se puede dividir entre 0, intentalo otra  vez...\n ");
				}
				else
				{
					printf("Resultado: %d\n",operador1/operador2);   
				}
				break;

			case 5:
				printf("Saliendo...\n\n");
		}
		/*Cuando el usuario selecciona la opción 5, el bucle termina y se cierra el programa*/
	} while (!(eleccion == 5));

}

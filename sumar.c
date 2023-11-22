#include <stdio.h>
#include "sumar.h"

int sumar()
{
	int operador1,operador2;
	
	printf("Introduce un numero: ");
	scanf("%d",&operador1);
	printf("Introduce otro numero: ");
	scanf("%d",&operador2);
	return (operador1+operador2);
}


OBJS = menu.o sumar.o programa.o
CFLAGS = -g -Wall
BYNARY = ejecutable

# Inicio del makefile
ejecutable: $(OBJS)
	gcc -o $(BYNARY) $(OBJS)

programa.o: menu.h sumar.h 
	gcc $(CLAGS) -c programa.c 

menu.o: menu.c menu.h 
	gcc $(CLAGS) -c menu.c 

sumar.o: sumar.c sumar.h
	gcc $(CLAGS) -c sumar.c

clean:
	rm -f *.o

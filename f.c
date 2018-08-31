#include <stdio.h>
void saludo();
int sumar(int n1, int n2);

int main(int argc, char const *argv[])
{ 
	int a,b,suma=0;

	printf("\nDigite 2 numeros\n");
	scanf("%i %i", &a, &b);

	suma = sumar(a,b);

	printf("\nLa suma es: %i", suma);

	saludo();

	return 0;
}
void saludo(){
	printf("\nHola que tal\n");
}
int sumar(int n1, int n2){
	int suma = 0;
	suma = n1+n2;

	return suma;
}
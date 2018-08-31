#include <stdio.h>
long factorial(int n);

int main(int argc, char const *argv[])
{
	printf("%s\n Hola a todos");
	printf("%s\n quite lineas de codigo" );
	
	return 0;
}
long factorial(int n){
	if(n<=1){
		return 1;
	}else{
		return (n*factorial(n-1));
	}
}
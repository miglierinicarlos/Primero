#include <stdio.h>
long factorial(int n);

int main(int argc, char const *argv[])
{
	printf("%s\n Hola a todos");
	printf("%s\n Mi segundo commit");
	printf("%s\n 1234" );
	printf("%s\n Hago un pull");
	return 0;
}
long factorial(int n){
	if(n<=1){
		return 1;
	}else{
		return (n*factorial(n-1));
	}
}
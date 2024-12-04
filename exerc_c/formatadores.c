#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Meu nome é %s \n", "Rayane");
	
	return(0);
}

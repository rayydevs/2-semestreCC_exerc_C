#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("%s está a %d milhões de milhas \n do sol\n", "Vênus", 67);
	
	return(0);
}

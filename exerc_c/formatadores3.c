#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("%s est� a %d milh�es de milhas \n do sol\n", "V�nus", 67);
	
	return(0);
}

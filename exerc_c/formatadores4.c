#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("A letra %c pronuncia-se %s", 'j', "jota");
	
	return(0);
}

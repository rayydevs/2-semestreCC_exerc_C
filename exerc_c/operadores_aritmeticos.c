# include <stdio.h>

//Este programa demonstra a funcionalidade dos operadores aritméticos em C.

int main (){
	
int x, y, z=0;

printf("\n************************************");
printf("\n Expressao * x * y * z *");
printf("**************************************");
x=y=10;
printf("\n x=y=10 * %d * %d * %d *", x, y, z);
z=x++; 
printf("\n z=x++ * %d * %d * %d *", x, y, z);
x=-x;
printf("\n x=-x * %d * %d * %d *", x, y, z);
y++;
printf("\n y++ * %d * %d * %d *", x, y, z);
x=x+y-z--;
printf("\n x=x+y-z--* %d * %d * %d *", x, y, z);
printf("**************************************");

return 0;

}


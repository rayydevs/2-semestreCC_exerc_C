// switch sem break

# include <stdio.h>
int main ()
{
char x;
float a, b ;
float result = 0.0;
printf ("\n Informe os 2 números e a operação ");
scanf ("%f %f %c", &a, &b, &x);
switch (x)
{

case '+': result = a + b;
printf ("\nResultado igual a %f ", result);
//break;
case '-': result = a - b;
printf ("\nResultado igual a %f ", result);
//break;
case '*': result = a * b;
printf ("\nResultado igual a %f ", result);
//break;
case '/': result = a / b;
printf ("\nResultado igual a %f ", result);
//break;
default : printf("\nOperador invalido");

}
//printf ("\nResultado igual a %f ", result);
return 0 ;
}

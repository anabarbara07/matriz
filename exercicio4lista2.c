/*04- Leia uma matriz 20 x 20. Leia tamb�m um valor X. O programa dever� fazer uma busca desse
valor na matriz e, ao final escrever a localiza��o (linha e coluna) ou uma mensagem de �n�o
encontrado�.*/

#include<stdio.h>

main(){

int a[3][3],l,c,x;

for(l=0;l<3;l++)
for(c=0;c<3;c++)
{

printf("Insira um numero: ");
scanf("%d",&a[l][c]);

}

printf("Entre com um valor: ");
scanf("%d",&x);

for(l=0;l<3;l++)
for(c=0;c<3;c++){

if(a[l][c]==x)
 printf("Numero na linha %d e coluna %d", l, c);

else
 printf("Nao encontrado");

}

}

/*02- Fazer um programa para ler uma matriz de tamanho M
1xM2, e multiplicar a matriz por uma
constante, ao final imprimir o valor da matriz resultante.*/

#include<stdio.h>

main(){

int x,c,l,c1,y;

printf("Entre com numero de linhas da matriz: ");
scanf("%d",&x);
printf("Entre com numero de colunas: ");
scanf("%d",&y);
printf("Entre com o valor da constante: ");
scanf("%d",&c1);

 int m[l][c],a[l][c];

for(l=0;l<x;l++)
for(c=0;c<y;c++){

  printf("\nEntre com os elementos da matriz: ");
  scanf("%d",&m[l][c]);

}
printf("\nMatrix resultante:\n");

for(l=0;l<x;l++)
for(c=0;c<y;c++){

  a[l][c]=m[l][c]*c1;
  printf("%d ",a[l][c]);
}
}




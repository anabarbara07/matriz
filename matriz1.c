/*01- Fazer um programa para percorrer uma matriz de tamanho 4x4 e some os elementos da
diagonal principal e diagonal secundária em duas variáveis diferentes.*/

#include<stdio.h>

main(){

int m[4][4],l,c,i,soma=0,soma2=0;

for(l=0;l<4;l++)
for(c=0;c<4;c++){

    printf("Entre com elementos da matriz: ");
    scanf("%d",&m[l][c]);
}

for(l=0;l<4;l++)
for(c=0;c<4;c++){

    if(l==c)
      soma=soma+m[l][c];

    if(c==4-1-l)
      soma2=soma2+m[l][c];
}

printf("\nSoma da diagonal primaria: %d",soma);
printf("\nSoma da diagonal secundaria: %d",soma2);


}






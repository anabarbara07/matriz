/*01- Criar um algoritmo que possa armazenar as alturas de dez atletas de cinco delega��es que
participar�o dos jogos de ver�o. Imprimir a maior altura de cada delega��o.*/

#include<stdio.h>

main(){

int m[10][1],maior=0,c,l;

for(l=0;l<1;l++)
for(c=0;c<5;c++){

for(l=0;l<10;l++)
for(c=0;c<1;c++)
{
printf("Digite a altura: ");
scanf("%d",&m[l][c]);

if(m[l][c]>maior)
    maior=m[l][c];

}
printf("\nO maior jogador tem altura de: %d\n\n",maior);

}

}

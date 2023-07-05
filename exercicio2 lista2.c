/*02- Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao
final.*/

#include<stdio.h>

main(){

int l,c,m[3][3];

for(l=0;l<3;l++)
for(c=0;c<3;c++){

printf("Insira um numero: ");
scanf("%d",&m[l][c]);

}
int a[3][3];

printf("A matriz fica: ");

for(l=0;l<3;l++)
for(c=0;c<3;c++){

m[l][c]=a[c][l];
printf(" %d",m[l][c]);
}

}





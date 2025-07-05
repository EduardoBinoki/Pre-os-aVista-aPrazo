#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

int i;
float total_vista=0;
float total_prazo=0;
float total_geral=0;
char tipo;
float valor;
float totalprazocomjuros;

for(i=0;i<=15;i++){

printf("Transacao:%d\n",i);


printf("Digite o tipo de transacao (V para a Vista, P para a prazo: ");
scanf(" %c",&tipo);

printf("Digite o valor da transacao: R$ ");
scanf("%f",&valor);
fflush(stdin);

if(tipo =='V' || tipo =='v'){
total_vista += valor;
}
if(tipo=='P' || tipo=='p'){
    total_prazo += valor;
}
else{
    printf("Tipo invalido! Ignorando esta transacao.\n");
    i--;
    continue;
}
}

total_geral = total_vista + total_prazo;
totalprazocomjuros = total_prazo*1.10;


printf("\n---RESULTADOS---\n");
printf("a)Total das compras a Vista: R$ %.2f\n",total_vista);
printf("b)Total das compras a Prazo: R$ %.2f\n",total_prazo);
printf("c)Total de todas as Transacoes: R$ %.2f\n",total_geral);
printf("d)Total das compras a Prazo com juros de 10%: R$ %.2f\n",totalprazocomjuros);

system("pause");

}

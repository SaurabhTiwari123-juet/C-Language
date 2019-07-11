#include <stdio.h>

int main(){
	//Um programa de conversão de valores em reais para a menor quantidade de notas e moedas, usando resto da divisão.
	//Área de declaração de variáveis
    double valor;
    int valor2, valor_3;
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda_1,moeda_50, moeda_25, moeda_10, moeda_5, moeda_01;
    scanf("%lf", &valor);
	
	//Lógica da parte decimal
    valor2 = valor;
    valor_3 = (valor - valor2) * 100;
	
	/*Lógica de conversão em notas / moedas usando resto da divisão e divisão: a nota ou moeda é igual ao resto
	da divisão do valor total pelo valor anterior, dividido pelo valor da nota/moeda atual, obtendo assim 
	as unidades de cada nota / moeda*/
    nota_100 = valor2 / 100;

    nota_50 = valor2 % 100 / 50;

    nota_20 = valor2 % 100 % 50 / 20;

    nota_10 =  valor2 % 100 % 50 % 20 / 10;

    nota_5 =  valor2 % 100 % 50 % 20 % 10 / 5;

    nota_2 =  valor2 % 100 % 50 % 20 % 10 % 5 /2;

    moeda_1 =  valor2 % 100 % 50 % 20 % 10 % 5 % 2;

    moeda_50 =  valor_3 / 50;

    moeda_25 =  (valor_3 % 50) / 25 ;

    moeda_10 =  ((valor_3 % 50) % 25 )/ 10;

    moeda_5 =  (((valor_3 % 50) % 25) % 10) / 5;

    moeda_01 =  (((valor_3 % 50) % 25) % 10) % 5;
	
	//Saída de dados:
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", nota_100);
    printf ("%d nota(s) de R$ 50.00\n", nota_50);
    printf ("%d nota(s) de R$ 20.00\n", nota_20);
    printf ("%d nota(s) de R$ 10.00\n", nota_10);
    printf ("%d nota(s) de R$ 5.00\n", nota_5);
    printf ("%d nota(s) de R$ 2.00\n", nota_2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf ("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf ("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf ("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf ("%d moeda(s) de R$ 0.05\n", moeda_5);
    printf ("%d moeda(s) de R$ 0.01\n", moeda_01);
  return 0;
}
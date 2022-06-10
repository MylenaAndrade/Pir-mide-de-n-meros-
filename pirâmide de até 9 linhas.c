#include<stdio.h>
/*
Desenvolver uma função que, dado um número
inteiro N, *exiba* um triângulo como no exemplo
abaixo:

		    1  
	    1 2 1    	  
	  1 2 3 2 1	  
	1 2 3 4 3 2 1
  
*/

//sinalizando que existe uma função
void triangulo(int n);

//main
void main(){
	//declaração de variáveis
	int numero;
	
	//comandos
	printf("Informe um numero positivo: ");
	scanf("%d", &numero);
	
	//chamando a função
	triangulo(numero);
}

//função
void triangulo(int n){
//declartação de variáveis
int i, j, novo, aux;
	
//varrendo até o número antecessor em que o usuário for digitar
 for( i=0; i<n ; i++)
 {
	
//pulando espaços para fazer o formato da pirâmide
  for( j=n-i; j>=1 ; j--)
  {
       printf("  ");
  }
//varrendo a primeira parte da pirâmide
	aux= i+1;
	for( j=1; j<=aux ; j++)
	{
	      printf("%d ", j);		
//verificando o maior numero que j pode atingir
		if(j>i)
		{
//diminuindo 1 do 'J', para formar a ordem decrescente do maior 'J' até 1
		   novo=j;
		   while(novo!= 1){
		   	novo--;
			printf("%d ", novo);
		   }
						
		}
					
	}
		printf("\n");
				
 }
	
			
}

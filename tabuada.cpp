#include <stdio.h>
//tabuada - realizada no ano de 2020 - Faculdade FAM!!

void Tabuada(){
	int cont, num, res;
	
	printf("Digite um numero de 1 A 10 para representar a tabuada desejada: \n");
	scanf("%d", &num);
	
	if((num>=1)&&(num<=10))
	{
		for (cont=1; cont<=10; cont++)
		{
		res = cont * num;
		printf("\n %d * %d = %d\n",cont,num,res);
		}
	}
	
	else{
		printf("\nNumero invalida!\n");
	}
}

int main (){
	int escolha;
	
	do{
		printf("\n\n");
		printf("Tabuada da Multiplicacao\n");
		printf("\n1.Tabuada\n");
		printf("2.Novamente\n");
		printf("3.Sair\n");
		printf("Escolha uma opcao\n\n");
		scanf("%d", &escolha);
	
	
	switch(escolha){
		case 1:
			Tabuada();
		    break;
		
		case 2:
			Tabuada();
			break;
		
		case 3:
			printf("Saindo...\n\n");
			break;
		
		default:
			printf("Opcao Invalida!\n");
	}
} while (escolha != 3);

	return 0;
		
}





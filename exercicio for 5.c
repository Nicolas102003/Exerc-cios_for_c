#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[])
 {
 	int idade,i;
 	
 	
 	for(i=1;i<=4;i++){
 	setlocale(LC_ALL, "Portuguese");
 	printf("\n Classificação de idade ");
 	printf("\ndigite a sua informe sua idade: ");
 	scanf("%d", &idade);
 	
 	if(idade>=5 && idade<=7) {
 		printf("\nVocê é da categoria Infantil A\n");
	}

 	if(idade>=8 && idade<=10) {
 		printf("\nVocê é da categoria Infatil B\n");
	}
 	if(idade>=11 && idade<=13) {
 		printf("\nVocê é da categoria Juvenil A\n");
	}

 	if(idade>=14 && idade<=17) {
 	printf("\nVocê é da categoria Juvenil B\n");
	}
			 
 	if(idade>=18) {
 	printf("\nVocê é da categoria Senior\n");
	}
	}
	 
 	system("PAUSE");
 	
	return 0;
	}

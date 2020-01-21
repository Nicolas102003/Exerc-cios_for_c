#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("color B0");
	setlocale(LC_ALL, "Portuguese"); 
	float n1,n2,n3,n4,md;
	char nome[7];
	int i;
	
	for(i=1;i<=4;i++){
	printf("\n\t\nota bimestral\n\n");
	printf("\n\t digite o nome do alno\n\n");
	scanf("%s",&nome);
	printf("\n\t digite a nota do primeiro bimestre \n\n");
	scanf("%f",&n1);
	printf("\n\t \adigite a nota do segundo bimestre \n\n");
	scanf("%f",&n2);
	printf("\n\t digite a nota do terceiro bimestre \n\n");
	scanf("%f",&n3);
	printf("\n\t digite a nota do quarto bimestre \n\n");
	scanf("%f",&n4);
	md=(n1+n2+n3+n4)/4;
		if(md>6){
			printf("\n \t  o aluno alcançou a média: %.f\n\n",md);	
			printf("\n \t  aprovado : %.f\n\n"); 
		}
		else{
			printf("\n \t  o aluno alcançou a média: %.f\n\n",md);
			printf("\n \t  reprovado");
		}
	}
	return 0;
}

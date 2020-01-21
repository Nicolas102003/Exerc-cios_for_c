#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float a,b,x1,x2,c,d;
	int i;
	for(i=1;i<=5;i++){
	
	printf("\n\t Equaçao de 2º grau \n\n");
	printf("\n\t\a digite o valor A\n\n");
	scanf("%f",&a);
	printf("\n\t \adigite o valor B \n\n");
	scanf("%f",&b);
	printf("\n\t \adigite o valor C \n\n");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);	
	{
	printf("\n \t \a O resultado do delta e: %f\n\n",d); 
	}
	if (d<0){
	
	
		printf("\n \t \a nao e possivel extrair raiz desse numero\n\n"); 	
	 } 
	 else
	 {
	 	x1 = ((-b) + sqrt (d))/(2*(a));
	 	x2 = ((-b) - sqrt (d))/(2*(a));
	 
	 printf("\n \t \a o valor de x1: %f\n\n",x1);
	 printf("\n \t \a o valor de x2: %f\n\n",x2);
	}
}
	 system("PAUSE");
	 
	 return 0;
	
}

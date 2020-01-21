#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	system("color B0");
	setlocale(LC_ALL, "Portuguese"); 
	float a,b,c;
	int i;
	
	for(i=1;i<=10;i++){
	printf("\n\t\triangulos\n\n");

	printf("\n\t  digite o lado a \n\n");
	scanf("%f",&a);
	printf("\n\t  digite o lado b \n\n");
	scanf("%f",&b);
	printf("\n\t  digite o lado c \n\n");
	scanf("%f",&c);
		if(a==b&&b==c){
			printf("o triangulo é equilatero");	
			if(a!=b&&b!=c&&a!=c)
				printf(" o triangulo é escaleno");
			}
			else{

			 printf(" o triangulo é isóceles");
}
}

	return 0;
}

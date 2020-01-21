#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float r,a,h,alc,ac,vf;	
	int i;
	
	for(i=1;i<=4;i++){
	
	printf("\n\t área de uma lata \n\n");
	printf("\n\t digite a altura\n\n");
	scanf("%f",&h);
	printf("\n\t digite o raio\n\n");
	scanf("%f",&r);	
	alc=2*3.14*r*h;
 	ac=3.14*pow(r,2);
	vf=alc+(ac*2);
	printf("\n \t  O resultado e: %f\n\n",vf,"cm²"); 
	}
	
	system("PAUSE");	
 	 return 0;
 }

	

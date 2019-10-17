#include <stdio.h>

int main(){
	//Adaptando o programa para calcular outros tipos de area
	//Incluindo tambem Circunferencias/Triangulos/Quadrados e Retangulos
	int op,x;
		float b,h,r,pi=3.14;
		printf("Escolha o tipo de area que deseja calcular:\n(1) --- Quadrado ou Retangulo\n(2) --- Triangulo\n(3) --- Circunferencia\n");
		scanf("%d",&op);
		//Criando um switch para selecionar o tipo de equação      
		switch(op){
			case 1:
				printf("Digite a base do quadrado ou retangulo:\n");
				scanf("%f",&b);
				printf("Digite a altura do quadrado ou retangulo:\n");
				scanf("%f",&h);
				printf("A area do Quadrado ou Retangulo equivale: %f\n",b*h);
			break;
			case 2:
				printf("Digite a base do Triangulo:\n");
				scanf("%f",&b);
				printf("Digite a altura do Triangulo:\n");
				scanf("%f",&h);
				printf("A area do Triangulo equivale: %f\n",(b*h)/2);
			break;
			case 3:
				printf("Digite o raio da Circunferencia:\n");
				scanf("%f",&r);
				printf("A area da Circunferencia equivale: %f\n",pi*r*r);
			default:
				printf("Opção invalida!\n");
			break;
		}
}

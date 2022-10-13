#include <stdio.h> 
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	printf("calculador de idade\n");
	int idade;
	
	printf("informe a idade\n");
	scanf("%d", &idade);
	if (idade>=18 && idade<99){
		printf("você é maior de idade\n");
		printf("já pode ser preso :D\n ");
	}
	if(idade<18){
		printf("você é menor de idade\n");
		printf("não pode beber ainda T-T\n");
	}
	if(idade>=100){
		printf("você já devia está morto\n");
	}
	if(idade%2 !=0){
		printf("cuidado sua idade e impar\n");
	}
	if(idade%2 ==0){
		printf("fique tranquilo sua idade é par");
	}
	
	return 0;
}

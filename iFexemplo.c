//estrutura de sele��o IF: EX 01

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,media;
	
	//Atribui��o direta de valores
	
	n1=2.5;
	n2=2.5;
	
	//Calculo da m�dia
	media=(n1+n1)/2;
	
	//Verificando se o alunos est� aprovado ou reprovado
	
	if(media>=7){
		printf("\nAluno aprovado com M�dia: %.2f", media);
		
	}else{
		printf("\nAluno reprovado com M�dia: %.2f", media);
	}
	
	getch();
	return 0;	
}

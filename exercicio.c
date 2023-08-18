#include <stdio.h>

main(){

char nome[50];
int idade;
int matricula;
char endereco[50];  
char curso[50];
int periodo;
char disciplina[50];  
float mensalidade;

printf("\nCADASTRE SE:\n");
  
printf("\nQual seu nome? ");
  fgets(nome, 50, stdin);
printf("\nQual sua idade? ");
  scanf("%d", &idade);
printf("\nMatricula: ");
  scanf("%d", &matricula);
  fflush(stdin);
printf("\nEndereco: "); 
  fgets(endereco, 50, stdin);
printf("\nQual seu curso? ");
  fgets(curso, 50, stdin);
printf("\nPeriodo? ");
  scanf("%d", &periodo);
  fflush(stdin);
printf("\nDisciplina: ");
  fgets(disciplina, 50, stdin);
printf("\nMensalidade? ");
  scanf("%f", &mensalidade);

printf("\nCADASTRO FEITO\n");  
printf("CONFIRA OS DADOS CADASTRADOS:\n");
  
printf("\nSeu nome: %s\n", &nome);

printf("\nSua idade: %d\n", idade);

printf("\nSua matricula: %d\n", matricula);

printf("\nSeu endereco: %s\n", &endereco);

printf("\nSeu curso: %s\n", &curso);

printf("\nPeriodo cursando: %d\n", periodo);

printf("\nDisciplina: %s\n", disciplina);  
  
printf("\nSua mensalidade: %.1f\n", mensalidade);

system("pause");
  
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 5

typedef struct cad
{
	int cod;
	char aut[100];
	char obra[100];
	char edit[100];
} cadastro ;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	cadastro livro[TAM];
	int op, i;
	
	unsigned int cp = 1252;
	unsigned int cpIn = GetConsoleCP();
	unsigned int cpOut = GetConsoleOutputCP();
	SetConsoleOutputCP(cp);
	SetConsoleCP(cp);	
	
	
	i = 0;
	
	do
	{
		printf ("                                   ========================================\n");
		printf ("                                     Bem-vindo(a) ao sistema de cadastros\n");
		printf ("                                   ========================================\n");
		printf ("\n"); 	
		printf ("                                              0 - Encerrar\n");
		printf ("                                      1 – Inserir um novo cadastro\n");
		printf ("                                     2 – Mostrar todos os cadastros\n");
		printf ("\n");
		printf ("                                         Insira a opção desejada: ");
		scanf ("%d", &op);
		fflush (stdin);
		system ("cls");
		switch (op)
		{
			case 0: printf ("Encerrando...");
				break;
			
			case 1: 
				if (i >= 5)
				{
					system ("cls");
					printf ("Sistema de cadastro lotado. Não é possível armazenar mais informações!\n");
					system ("pause");
					system ("cls");
				}
				else
				{
					for (i = 0; i < 5; i++)
					{
						printf ("\n");
						printf ("Código de cadastro do livro: %d\n", livro[i].cod = i+1);	
						printf ("Autor(a): ");
						gets (livro[i].aut);
						fflush (stdin);
						printf ("Título da obra: ");
						gets (livro[i].obra);
						fflush (stdin);
						printf ("Editora: ");
						gets (livro[i].edit);
						fflush (stdin);
						printf ("\n");
						system ("cls");
					}
				}
			break;
			
			case 2:
				if (i == 0)
				{
					system ("cls");
					printf ("Lista vazia!\n");
					system ("pause");
					system ("cls");
				}
				else 
				{
					for (i = 0; i < 5; i++)
					{
						printf ("Código: %d\n", livro[i].cod);
						printf ("Autor(a): %s\n", livro[i].aut);
						printf ("Título da obra: %s\n", livro[i].obra);
						printf ("Editora: %s\n", livro[i].edit);
						printf ("\n");
					}
					system ("pause");
					system ("cls");
				}
			break;
			
			default:
				printf ("Erro: opção inválida!\n");
				system ("pause");
				system ("cls");
			break;
		} 
	} while (op != 0);
	
	return 0;
}

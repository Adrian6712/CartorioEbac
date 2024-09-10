	#include <stdio.h> //biblioteca de comunica��o com o us�ario
	#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
	#include <locale.h> //biblioteca de aloca��es de texto por regi�o
	#include <string.h> 

int registro() //fun��o responsavel por cadastrar os usuarios no sistema
{
	// inicio cria��o de variaveis/string
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// fim da cria��o das variaveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usa�rio
	scanf("%s", cpf); // %s refere-se a string
	
	strcpy(arquivo,cpf); //responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa criar a variavel no sistema
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //(file = fopen) estou chamando para abrir a variavel arquivo. estou usando "a" para atualizar a variavel					
	fprintf(file,","); 
	fclose(file); //"fclose" sempre sera usado para fechar a fun��o FILE
	
	printf("Digite o nome a ser cadastrado: "); //coletando informa��es do us�ario
	scanf("%s",nome); //usando "%s" para puxar informa��es da string
	
	file = fopen(arquivo, "a"); // chamando file e abrindo (fopen) para atualizar "a" na variavel arquivo 
	fprintf(file,nome); //salvando o valor da variavel
	fclose(file); //fechando a fun��o file
	
	file = fopen(arquivo,"a"); 
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause"); //usando system pause para pausar o sistema e n�o sair da op��o
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
		
	char cpf[40];
	char conteudo[100];
	char nome[40];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Arquivo n�o cadastrado!.\n");
	}
	
	while(fgets(conteudo,100,file) != NULL)
	{
		printf("\nEssa s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}
	

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuario a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
		printf("\n\n");
	}
}



	int main()
	{
			int opcao=0; //definindo as variaveis
		int laco=1;
	
	
		for(laco=1;laco=1;)
		{
	
		system("cls"); // responsavel por limpar a tela

		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem


		printf("### Cart�rio da EBAC ###\n\n"); //inicio da sele��o do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\n\t4 - Sair do sistema\n\n");
		printf("Op��o: "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	 
		system("cls");
		
		switch(opcao)
		{
			case 1:
			registro(); //chamada de fun��es
			break;
				
			case 2:
			consultar(); //chamada da fun��o 
			break;
				
			case 3:
			deletar(); //chamada da fun��o
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n\n");
			return 0;
			system("pause");
			break;
				
			default:
				printf("esta opcao nao est� disponivel!\n\n");
				system("pause");
				break;
	}
		
		} //fim da sele��o	

	}
	

	
	

	
	

	

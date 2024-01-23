 #include <stdio.h> //biblioteca de comunica��o com usu�rio
 #include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
 #include <locale.h> //biblioteca de alaca��es de texto por regi�o
 #include <string.h> //biblioteca respons�vel por cuidar das  string
 
 int registro() // Fun��o responsavel por cadastrar os usu�rios no sistema
{   // inicio cria�a� de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	printf("Digite o CPF a ser cadastrado: ");//coletando informa��o 
	scanf("%s",cpf);//%s refere-se a string
	
	strcpy(arquivo , cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //cria arquivo
	file = fopen(arquivo, "w"); // cria arquivo
	fprintf(file,cpf); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria arquivo
	fprintf(file,","); // salva a virgula depois da vari�vel
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informa��o
	scanf("%s",nome);//%s refere-se a string
	
	file = fopen(arquivo, "a"); // cria arquivo
	fprintf(file,nome);// salva o valor da vari�vel
	fclose(file); // fecha arquivo
	
	file = fopen(arquivo, "a"); // cria arquivo
	fprintf(file,",");// salva a virgula depois da vari�vel
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // coleteando informa��o
	scanf("%s",sobrenome);//%s refere-se a string
	
	file = fopen(arquivo,"a");// cria arquivo
	fprintf(file,sobrenome);// salva o valor da vari�vel
	fclose(file);// fecha arquivo
	
	file = fopen(arquivo, "a");// cria arquivo
	fprintf(file,",");// salva o valor depois da vari�vel
	fclose(file);// fecha arquivo
	
	printf("Digite o cargo a ser cadastrado: ");// coletando irforma��o
	scanf("%s",cargo);//%s refere-se a string
	
	file = fopen(arquivo, "a");// cria arquivo
	fprintf(file,cargo);//salva o valor da vari�vel 
	fclose(file);// fecha o arquivo
	
	system("pause");
}

int consulta()//Fun��o responsavel por achar usu�rios no sistema

{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
     // inicio cria�a� de variaveis/string
    char cpf[40];
    char conteudo[200];
    {
	
    printf("Digite o CPF a ser consultado :");//coletando informa��es
    scanf("%s",cpf);//%s refere-se a string
    }

    FILE *file; 
    file = fopen(cpf,"r");
  
    if(file == NULL)
  
     printf("N�o foi possivel abrir esse arquivo,n�o localizado! .\n");
     
    
     while(fgets(conteudo, 200, file)  !=NULL)  
	{
	
       printf("\nEssas s�o as informa��oes do usu�rio:");
       printf("%s" ,conteudo);
       printf("\n\n");
       
       system("pause");
    }
}

int deletar()
{   
    char cpf[40];
    
     printf("Digite o CPF do usu�rio a ser deletado do sistema: ");
     scanf("%s", cpf);
     
     remove(cpf);
     
    FILE *file;
    file = fopen(cpf,"r");
  	
  	if(file == NULL);
  	
  	{
  		printf(" O usu�rio foi deletado ou n�o se encontra no sistema!.\n");
  		system("pause");
  		
	}
  }
	 
int main() 
	
	{
	int opcao=0; //Definindo vari�veis
	int laco=1;

	
	    for(laco=1;laco=1;)
       {
       	
       	  setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
 	
 	        
 	
 	 
            printf("### Cart�rio da EBAC ####\n\n");//inicio do menu
 	        printf("Escolha a opicao desejada do menu\n\n");
 	        printf("\t1 - registrar nomes\n");
 	        printf("\t2 - Consultar nomes\n");
 	        printf("\t3 - deletar nomes\n\n");
 	        printf("\t4 - sair do sistema\n\n");
	        printf("Opcao: "); //fim do menu
 	
 	        scanf("%d" , &opcao);//armazenamento a escolha do usu�rio
 	
 	        system("cls"); //responsavel por limpar a tela
 	     
 	        switch(opcao) //inicio da sele��o do menu
 	        {
 	        case 1:
 	        registro();
 		    break;
 		   
 		    case 2:
 		    consulta();
 		    break;
 		   
		    case 3:
		    deletar();
 		    break;
 		   
		    case 4:
		    printf("obrigado por utlizar o sistema!\n");
		    return 0;
		    break;
		    
		    default:
		    printf("Essa opcao n�o est� disponivel!\n");
	    	   system("pause");
		    break;
	    	} //Fim da sele��o
    	}   
    }



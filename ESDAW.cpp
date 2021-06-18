#include <stdio.h>
#include <conio.h>




//INICIO DE CADASTRO DA EQUIPA

void Equipa(void){
	
	
	//Inicio de comandos Para guardar dados apos fechar o programa.
	
	
	FILE*alocacao;
	alocacao=fopen("EquipasRegistradas.txt", "a+");//criei um arquivo para guardar dados.
	
	
	
	struct Equipa
	{
		char Nome[40];
		char Id[6];
	};
	struct Equipa DaEquipa;
	
	
	
	//EQUIPA
	
	printf("Registrar o Nome da Equipa: ");
	fflush(stdin);
	fgets(DaEquipa.Nome,40,stdin);
	fprintf(alocacao,"%s",DaEquipa.Nome);//armazenei a palavra no arquivo que criei.
	
	
	//ID
	
	printf("Registrar ID ou Sigla da Equipa: ");
	fflush(stdin);
	fgets(DaEquipa.Id,40,stdin);
	fprintf(alocacao,"%s",DaEquipa.Id);
	
	printf("\n\nO CADASTRO FOI CONCLUIDO COM SUCESSO\n\n");
	
	printf("Equipa....%s",DaEquipa.Nome);
	
	printf("Sigla, Acronomo ou Id....%s",DaEquipa.Id);
	
	
	
	
}

//FIM DO CADASTRO DA EQUIPA








//INICIO DE CADASTRO DO JOGADOR

void Jogador(void){
	
	//Inicio de comandos Para guardar dados apos fechar o programa.
	
	
	FILE*alocacao;
	alocacao=fopen("DadosRegistrados.txt", "a+");//criei um arquivo para guardar dados.
	
	
	struct Jogador
	{
		char Nome[40];
		char Apelido[30];
		int Id;
		char Actividade[20];
		char DataInicioDoContrato[12];
		char DataFinalDoContrato[12];
		char Equipa[40];
		int Golo;
	};
	
	struct Jogador DeJogador;
	
	
	//Nome
	printf("Nome:  ");
	fflush(stdin);
	fgets(DeJogador.Nome,40,stdin);
	fprintf(alocacao,"%s",DeJogador.Nome);
	
	
	//Apelido
		printf("Apelido:  ");
	fflush(stdin);
	fgets(DeJogador.Apelido,40,stdin);
	fprintf(alocacao,"%s",DeJogador.Apelido);
	
	
	//ID
		printf("ID:  ");
	scanf("%d", &DeJogador.Id);
	fprintf(alocacao,"%d",DeJogador.Id);
	
	
	//Actividade
		printf("Actividade:  ");
	fflush(stdin);
	fgets(DeJogador.Actividade,40,stdin);
	fprintf(alocacao,"%s",DeJogador.Actividade);
	
	
	//Inicio de Contrato
		printf("Inicio do Contrato:  ");
	fflush(stdin);
	fgets(DeJogador.DataInicioDoContrato,40,stdin);
	fprintf(alocacao,"%s",DeJogador.DataInicioDoContrato);
	
	
	//Fim de Contrato
	printf("Fim do Contrato:  ");
	fflush(stdin);
	fgets(DeJogador.DataFinalDoContrato,40,stdin);
	fprintf(alocacao,"%s",DeJogador.DataFinalDoContrato);
	
	
	//Numero de Golos
		printf("Numero de Golos:  ");
		scanf("%d",&DeJogador.Golo);
		fprintf(alocacao,"%d",DeJogador.Golo);
	
	
	printf("\n\nO CADASTRO FOI CONCLUIDO COM SUCESSO\n\n");
	
    printf("Nome:  %s",DeJogador.Nome);
	printf("Apelido:  %s",DeJogador.Apelido);
	printf("ID:  %d",DeJogador.Id);
	printf("\n");
	printf("Actividade:  %s\n",DeJogador.Actividade);
	printf("Inicio do Contrato:  %s",DeJogador.DataInicioDoContrato);
	printf("Fim do Contrato:  %s",DeJogador.DataFinalDoContrato);
	printf("Numero de Golos:  %d",DeJogador.Golo);
	
	printf("\n\n\n\n");
	
}

//FIM DE CADASTRO DO JOGADOR




//ESTA PEQUENA FUNCAO MOSTRA TODOS DADOS REGISTRADOS NO ARQUIVO JOGADORES

void Mostrar(void){
	FILE*alocacao;
	alocacao=fopen("DadosRegistrados.txt", "r");
	
	char info[1000];
	
	while(fgets(info,1000,alocacao))
	{
		printf("%s  \n",info);
	}
}


void MostrarEquipas(void){
	FILE*alocacao;
	alocacao=fopen("EquipasRegistradas.txt", "r");
	
	char info[1000];
	
	while(fgets(info,1000,alocacao))
	{
		printf("%s  \n",info);
	}
}



int main(int argc, char** argv)
{
	
	int n;
	
	printf("\n\n..........................MENU............................\n\n");
	
	printf("\n1-CADASTRAR UMA EQUIPA DE FUTEBOL\n");
	printf("\n2-CADASTRAR UM JOGADOR DE FUTEBOL\n");
	printf("\n3-JOGADORES CADASTRADOS\n");
	printf("\n4-EQUIPAS CADASTRADAS\n");
	printf("\n5-JOGADORES CADASTRADOS EM UMA CERTA EQUIPA\n");
	
	printf("\nEscolha uma das opcoes:    \n");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		Equipa();
		break;
	case 2:
		int a;
		printf("ESCOLHA UMA EQUIPA: \n");
	     MostrarEquipas();
	     scanf("%i",&a);
	     switch(n)
		 {
		 case 1:
		 	Jogador();
			 break;
		 case 2:
		 	Jogador();
			 break;
		 case 3:
		 	Jogador();
			 break;
		 case 4:
		 	Jogador();
			 break;
		 default:
			 break;
		 }
		break;
	case 3:
		
		Mostrar();
		
		break;
	
	case 4:
		
		MostrarEquipas();
		
		break;
	
	case 5:
		
		
		
		break;
	
	default:
		break;
	}
	
	
	return 0;
}
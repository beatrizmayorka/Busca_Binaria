#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define min

void binarySearch( int vetorOrdenado[], int tamanhoInformado );
int quickSort();


	//===== EXECUTA O QUICK SORT, JA COM O PIVO DEFINIDO LOGO A BAIXO =====
	
int dividirVetorQuickSort( int vetorInfomado[], int inicioInformado, int finalInformado ) {
	
	//===== DEFINE INFORMACOES =====
	
	int numeroInicioVetorQuickSort = inicioInformado + 1;
	int numeroFinalVetorQuickSort = finalInformado;
	int pivoVetorQuickSort = vetorInfomado[inicioInformado];
	int armazenamentoTemporario;
	
	//===== TERMINA DE DIFINIR =====
	
	//===== ORGANIZA =====
	while( numeroInicioVetorQuickSort <= numeroFinalVetorQuickSort ){
		
		if( vetorInfomado[numeroInicioVetorQuickSort] <= pivoVetorQuickSort ){
			numeroInicioVetorQuickSort++;
		} else if( vetorInfomado[numeroFinalVetorQuickSort] > pivoVetorQuickSort ){
			numeroFinalVetorQuickSort--;
		} else if( numeroInicioVetorQuickSort <= numeroFinalVetorQuickSort ){
			
			armazenamentoTemporario = vetorInfomado[numeroInicioVetorQuickSort];
			vetorInfomado[numeroInicioVetorQuickSort] = vetorInfomado[numeroFinalVetorQuickSort];
			vetorInfomado[numeroFinalVetorQuickSort] = armazenamentoTemporario;
			
			numeroInicioVetorQuickSort++;
			numeroFinalVetorQuickSort--;
			
		}	
	}
	
	//===== FINALIZADO A ORGANIZACAO =====
	
	//===== ARMAZANA OS DADOS =====
	
	armazenamentoTemporario = vetorInfomado[inicioInformado];
	vetorInfomado[inicioInformado] = vetorInfomado[numeroFinalVetorQuickSort];
	vetorInfomado[numeroFinalVetorQuickSort] = armazenamentoTemporario;
	
	return numeroFinalVetorQuickSort;
	
	//===== FIM DE ARMAZENAMENTO, RETORNA TBM TA =====
}

	//===== TERMINA O QUICK E JOGA O VALOR O RESULTADO =====

	//===== DEFINE O PIVO =====

void processamentoQuickSort( int vetorInformado[], int inicioInformado, int finalInformado ){
	
	int pivoVetorQuickSort;
	
	if( inicioInformado < finalInformado ){
		
		//===== A SEREJA DO BOLO =====
		//aqui define o pivo ok ?
		pivoVetorQuickSort = dividirVetorQuickSort( vetorInformado, inicioInformado, finalInformado );
		processamentoQuickSort( vetorInformado, inicioInformado, pivoVetorQuickSort - 1 );
		processamentoQuickSort( vetorInformado, pivoVetorQuickSort + 1, finalInformado );
		//===== HUMMM =====
		
	}
}

	//===== FIM DO DEFINE PIVO =====

int main(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	//===== CORZINHA =====
	
	system("color 2");
	
	//===== FIM DA CORZINHA UI UI =====
	
	printf(" ------------------\n");
	printf(" | > Quick Sort < |\n");
	printf(" ------------------\n");


	printf("\n > Digite o tamanho da estrutura desejado:\n > ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	
	//===== FIM DAS CONFIGS =====
	
	int tamanhoVetor = numeroInformado;
	int vetorQuickSort[tamanhoVetor];
	
	//===== GERA OS VALORES =====
	
	for(contador = 0; contador < numeroInformado; contador++)
	{
		vetorQuickSort[contador] = rand() % numeroInformado + 1;
	}
	
	//===== TERMINA DE GERAR =====
	
	//===== COMECA O CONTADOR DE TEMPO =====
	
	clock_t marcandoTempo;
	marcandoTempo = clock();
	
	//===== AQUI SE INICIA A ORGANIZACAO =====
	
	processamentoQuickSort(vetorQuickSort, 0, numeroInformado - 1);
	
	
	marcandoTempo = clock();
	
	//===== FINALIZA O CONTADOR =====
	
	
	//===== MOSTRA NA TELA TUDO ORGANIZADO COM O TEMPO =====
	
	
	printf(" > O vetor organizado: \n\n");
	
	printf(" > Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorQuickSort[contador]);	
		} else {
			printf("%d, ", vetorQuickSort[contador]);
		}
	}
	printf(" }");
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf(" > O algoritimo foi finalizado em  %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	//===== CABO, COISA MAIS LINDA =====
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	//===== MENU! =====

	printf("\n > 1 < = Buscar algum numero.");
	printf("\n > 0 < = Sair.");
	printf("\n\n > Escolha a opcao desejada:\n > ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("cls||clear");
			binarySearch( vetorQuickSort, numeroDigitadoBuscaBinaria );
		break;
		
		
		case 0:
			printf("\n");
			system("cls||clear");
		break;
		
	}
}
	//===== CABO O MENU =====
	
	//===== INICIA A ORGANIZACAO BINARY =====
	
void binarySearch( int vetorOrdenado[], int tamanhoInformado ){
	
	int contador = 0, numeroDigitado = 0;
	system("cls||clear");

	//===== BUSCA TUDO O QUE TEM NO ARRAY JA ORGANIZADO =====

	for( contador = 0; contador < tamanhoInformado; contador++ ){
		if(contador == tamanhoInformado - 1){		
		} 
		else 
		{
		}
	}

	//===== TERMINA A BUSCA =====
	
	printf(" > Digite o valor que deseja buscar:\n > ");
	scanf("%d", &numeroDigitado);
	
	//===== VAI INIICAR A BUSCA BINARIA =====
	numberSearch( vetorOrdenado, numeroDigitado, tamanhoInformado );
}

	//===== BUSCANDO O NUMERO ESPERA AI...=====
	
int numberSearch( int vetorOrdenado[], int numeroDigitado, int tamanhoInformado ){
	
	int posicaoInicialVetor, posicaoFinalVetor, posicaoDesejada;
	posicaoInicialVetor = 0;
	posicaoFinalVetor = tamanhoInformado - 1;
	
	while( posicaoInicialVetor <= posicaoFinalVetor ){
		
		posicaoDesejada = ( posicaoInicialVetor + posicaoFinalVetor ) / 2;
		
		if( numeroDigitado == vetorOrdenado[posicaoDesejada] ){
			return printf("\n > O valor > %d <\n > Esta na posicao: > %d < do Array.\n > :3", vetorOrdenado[posicaoDesejada], posicaoDesejada);
			// ja tava esquendo do :3, ainda bem que lembrei ufa
		} else if( numeroDigitado < vetorOrdenado[posicaoDesejada] ){
			posicaoFinalVetor = posicaoDesejada - 1;
		} else {
			posicaoInicialVetor = posicaoDesejada + 1;
		}
	}
	
	//===== TA NA MAO =====
	
	return printf("\n > Nao foi encontrado o valor desejado :(\n\n"); 	
	
	//===== TEVE NAO =====
}

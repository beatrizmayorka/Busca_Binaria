//Selection_Sort

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define min


int main(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	//===== CORZINHA =====
	
	system("color 2");
	
	//===== FIM DA CORZINHA UI UI =====
	
	printf(" ----------------------\n");
	printf(" | > Selection_Sort < |\n");
	printf(" ----------------------\n");


	printf("\n > Digite o tamanho da estrutura desejado:\n > ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	
	int tamanhoVetor = numeroInformado;
	int vetorSelectionSort[tamanhoVetor];
	
	//===== FIM DAS CONFIGS =====
	
	
	//===== GERA OS VALORES ALEATORIOS =====
	for(contador = 0; contador < numeroInformado; contador++)
	{
		vetorSelectionSort[contador] = rand() % numeroInformado + 1;
	}

	//===== FIM =====
	
	
	//===== INICIA MARCADOR DE TEMPO =====
	clock_t marcandoTempo;
	
	//===== INICIA O ALGOREITIMO DO SELECTION SORT =====
	
	marcandoTempo = clock();
	
	for ( contadorNumero1 = 0; contadorNumero1 < numeroInformado - 1; contadorNumero1++ ) {
		
		int numeroMenorArmazenado;
		numeroMenorArmazenado = contadorNumero1;
		
		for( contadorNumero2 = contadorNumero1 + 1; contadorNumero2 < numeroInformado; contadorNumero2++ ) {
			
			if( vetorSelectionSort[numeroMenorArmazenado] > vetorSelectionSort[contadorNumero2] ){
				numeroMenorArmazenado = contadorNumero2;
			}
			
			if( contadorNumero1 != numeroMenorArmazenado ){
				armazenaNumeroTemporario = vetorSelectionSort[contadorNumero1];
				vetorSelectionSort[contadorNumero1] = vetorSelectionSort[numeroMenorArmazenado];
				vetorSelectionSort[numeroMenorArmazenado] = armazenaNumeroTemporario;
			}	
		}
	}
	
	//===== FINALIZA O ALGORITIMO =====
	
	marcandoTempo = clock();
	//===== FINALIZA MARCADOR DE TEMPO =====
	
	//===== MOSTRA NA TELAAA =====
	
	printf(" > O vetor organizado: \n\n");
	
	printf(" > Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorSelectionSort[contador]);	
		} else {
			printf("%d, ", vetorSelectionSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf(" > O algoritimo foi finalizado em  %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	//===== CHEGA =====
	
	
	//===== MENU DE OPCOES =====
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("\n > 1 < = Buscar algum numero.");
	printf("\n > 0 < = Sair.");
	printf("\n\n > Escolha a opcao desejada:\n > ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("cls||clear");
			binarySearch( vetorSelectionSort, numeroDigitadoBuscaBinaria );
		break;
		
		
		case 0:
			printf("\n");
			system("cls||clear");
		break;
		
	}
}
	//===== FIM DE MENU =====
	
	
	//===== BUSCA BIBINARY =====
	
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
			return printf("\n > O valor > %d <\n > Esta na posicao: > %d < do Array.\n > :3 \n", vetorOrdenado[posicaoDesejada], posicaoDesejada);
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

//Insertion_Sort 

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
	printf(" | > Insertion_Sort < |\n");
	printf(" ----------------------\n");


	printf("\n > Digite o tamanho da estrutura desejado:\n > ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	
	
	//===== FIM DAS CONFIGS =====
	
	int tamanhoVetor = numeroInformado;
	int vetorInsertionSort[tamanhoVetor];
	
	//===== GERA OS NUMEROS ALEATORIOS =====
	
	for(contador = 0; contador < numeroInformado; contador++)
	{
		vetorInsertionSort[contador] = rand() % numeroInformado + 1;
	}
	
	//===== TERMINA DE GERAR =====
	
	//===== COMECA A MARCAR O TEMPO =====
	
	clock_t marcandoTempo;
	marcandoTempo = clock();
	
	//===== EXECUTA O ALGORITIMO DE INSERTION =====
	
	for( contadorNumero1 = 1; contadorNumero1 < numeroInformado; contadorNumero1++ ){
		armazenaNumeroTemporario = vetorInsertionSort[contadorNumero1];
		contadorNumero2 = contadorNumero1 - 1;
		
		while( ( contadorNumero2 >= 0 ) && ( armazenaNumeroTemporario < vetorInsertionSort[contadorNumero2] ) ){
			
			vetorInsertionSort[contadorNumero2 + 1] = vetorInsertionSort[contadorNumero2];
			contadorNumero2--;
		}
		
		vetorInsertionSort[contadorNumero2 + 1] = armazenaNumeroTemporario;
	}
	
	//===== FINALIZA O ALGORITIMO =====
	
	marcandoTempo = clock();
	
	//===== FINALIZA A MARCACAO DE TEMPO =====
	
	//===== MOSTRA NA TELA OS VALORES =====
	
	printf(" > O vetor organizado: \n\n");
	printf(" > Vetor = { ");
	
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorInsertionSort[contador]);	
		} else {
			printf("%d, ", vetorInsertionSort[contador]);
		}
	}
	
	printf(" }");
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf(" > O algoritimo foi finalizado em  %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	//===== FINALIZA DE MOSTRAR TUDINHO RSRS =====
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	//===== MENU =====
	
	printf("\n > 1 < = Buscar algum numero.");
	printf("\n > 0 < = Sair.");
	printf("\n\n > Escolha a opcao desejada:\n > ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("cls||clear");
			binarySearch( vetorInsertionSort, numeroDigitadoBuscaBinaria );
		break;
		
		
		case 0:
			printf("\n");
			system("cls||clear");
		break;
		
	}
}
	//===== TERMINA MENU =====
	
	
void insertionSorting( int vetorInformado[], int inicioInformado, int finalInformado){
	
	int contadorNumero1 = 0;
		
	for( contadorNumero1 = inicioInformado + 1; contadorNumero1 <= finalInformado; contadorNumero1++ ){
		
		int armazenaNumeroTemporario = vetorInformado[contadorNumero1];
		int contadorNumero2 = contadorNumero1 - 1;
		
		while( vetorInformado[contadorNumero2] > armazenaNumeroTemporario && contadorNumero2 >= inicioInformado ){
			
			vetorInformado[contadorNumero2 + 1] = vetorInformado[contadorNumero2];
			contadorNumero2--;
		}
		
		vetorInformado[contadorNumero2 + 1] = armazenaNumeroTemporario;
	}
	
}

	
	//===== INICIA BUSCA BINARY =====
	
void binarySearch( int vetorOrdenado[], int tamanhoInformado ){
	
	int contador = 0, numeroDigitado = 0;
	
	system("cls||clear");
	
	for( contador = 0; contador < tamanhoInformado; contador++ ){
		if(contador == tamanhoInformado - 1){
			
		} else {
		
		}
	}
	
	printf("\n");
	printf(" > Digite o valor que deseja buscar:\n >  ");
	scanf("%d", &numeroDigitado);
	
	// Executando a busca binária
	numberSearch( vetorOrdenado, numeroDigitado, tamanhoInformado );
}

// procurando o número desejado no vetor
int numberSearch( int vetorOrdenado[], int numeroDigitado, int tamanhoInformado ){
	
	int posicaoInicialVetor, posicaoFinalVetor, posicaoDesejada;
	posicaoInicialVetor = 0;
	posicaoFinalVetor = tamanhoInformado - 1;
	
	while( posicaoInicialVetor <= posicaoFinalVetor ){
		
		posicaoDesejada = ( posicaoInicialVetor + posicaoFinalVetor ) / 2;
		
		if( numeroDigitado == vetorOrdenado[posicaoDesejada] ){
			return printf("\n > O valor > %d <\n > Esta na posicao: > %d < do Array.\n > :3", vetorOrdenado[posicaoDesejada], posicaoDesejada);
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

#include<stdio.h>
#include <Windows.h>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h> 
#include <iostream>
#include <stdio.h>
#include <math.h>


#define PI 3.14159265
#define ADC_BITS 12
#define ADC_RANGE (1 << ADC_BITS)


using namespace std;

int x;
int *ponteiro = &x;
int menu;

//gerando boleano aletorio
int binarioaletorio(){
//fun��o
	srand(time(NULL));
	int binario[2],igual;
	int i = 0,j;
	
	do{
		binario[i] = (rand() % 2);
		igual = 0;
		for(j = 0; j < i; j++){
			if(binario[j] == binario[i]){
				igual = 1;
			}
		}
		if(igual == 0){
			i++;
		}
	}while(i < 2);

	return binario[0];
}


int teste(){
	 
	int a;
  	int i = 0; 
 	char load[101]; 
 	while(i < 100) 
 	{ 
 		system("cls"); 
 		load[i++] = '#'; 
 		load[i] = '\0'; 
  
		printf("\n\n\nCARREGANDO TESTE...\n\n[%-100s] %%%d", load,i); 
 		Sleep(100); 
 	} 
 
 system("cls"); 
 printf("\n"); 
	
	a =	binarioaletorio();
	
	if(a == 1){
	
		cout<<"\n" << "TESTE REALIZADO COM SUCESSO!\n";
		Sleep(10000);
	}
	else{
			
		cout<<"\n" << "ERRO PROBLEMAS DE HARDWARE!\n";
		Sleep(10000);
	}
	
    
	return a;
	
}


void limpatela(){
	system("cls");
}

void repete(){
	int ret;
	int i;
	Sleep(100);
	printf("INICIANDO TESTE...\n");
	teste();
	
	limpatela();
	printf("\n1- Voltar ao menu\n");
	printf("2- sair\n");
				
	scanf("%d",&ret);
	fflush(stdin);

	if(ret == 1){
		x = 0;
		*ponteiro = x;
		i++;
	}
	else{			
		limpatela();
		exit(0);
	}
}



// Fun��o para gerar um sinal senoidal
double senoide(int frequencia, int taxadeamostra, int amostras)
{
    double sinValue = sin(2 * PI * frequencia * amostras / taxadeamostra);
    return sinValue;
}

int convertAnalogToDigital(double sinValue)
{
    int digitalValue = (int)(sinValue * ADC_RANGE / 2.0 + ADC_RANGE / 2.0);
    return digitalValue;
}

int testeadc()
{
	int taxadeamostra = 1000; // Taxa de amostragem
    int frequencia = 100; // Frequ�ncia do sinal de entrada
    int amostras = 1000; // N�mero de amostras
    int Resultadoc; // Resultado da convers�o
    int Resultadoe; // Resultado esperado
    double variacao; // Vari�vel para adicionar varia��o aleat�ria

	int i = 0; 
 	char load[101]; 
 	while(i < 100) 
 	{ 
 		system("cls"); 
 		load[i++] = '#'; 
 		load[i] = '\0'; 
  
		printf("\n\n\nCARREGANDO TESTE...\n\n[%-100s] %%%d", load,i); 
 		Sleep(100);
 	} 
 	
 	
 	srand(time(NULL)); //Inicializando o gerador de numero aleatorios
	
    for (int i = 0; i < amostras; i++)
    {
        // Gera o sinal senoidal
        double sinValue = senoide(frequencia, taxadeamostra, i);
        
        // Adiciona uma varia��o aleat�ria ao sinal
        variacao = (double)rand() / (double)RAND_MAX * 2.6 - 5.3;
        sinValue += variacao;

        // Converte o sinal senoidal para digital
        Resultadoc = convertAnalogToDigital(sinValue) + rand() % 5 - 2;

        // Calcula o resultado esperado
        Resultadoe = (int)(sinValue * (double)(1 << 12) / 2.0 + (double)(1 << 11));

        // Imprime o resultado da compara��o
        printf("Amostras %d: resultado esperado = %d, resultado convertido = %d\n", i, Resultadoe, Resultadoc);
         
    }
    // Compara o resultado esperado com o resultado convertido
    if (Resultadoe == Resultadoc)
    	{
        printf("Resultados iguais testes bem sucedidos\n");
    }
    else
    	{
        printf("Resultados diferentes problemas na convers�o\n");
    }
    Sleep(10000);
    return 0;
}


int testeRAM(){
	srand(time(NULL));
	int resultado = rand() % 2;
	int i = 0; 
 	char load[101]; 
 	while(i < 100) 
 	{ 
 		system("cls"); 
 		load[i++] = '#'; 
 		load[i] = '\0'; 
  
		printf("\n\n\nCARREGANDO TESTE...\n\n[%-100s] %%%d", load,i); 
 		Sleep(100);
 	} 
	
	if(resultado == 1){
		cout<<"\n\nTESTE DE RAM REALIZADO COM SUCESSO!\n"<<endl;
		Sleep(1000);
	}
	else{
		cout<<"\n\nERRO NO TESTE DE RAM!\n"<<endl;
		Sleep(1000);
	}
	
	return resultado;

}
				
void clearScreen() {
  printf("\033[2J");
  printf("\033[%d;%dH", 0, 0);
}

void setColor(int color) {
  printf("\033[%dm", color);
}

void drawBlock(int x, int y, int color) {
  printf("\033[%d;%dH", y, x);
  setColor(color);
  printf("\u2588\u2588");
}

int testedecoresbar() {
	int i = 0; 
 	char load[101]; 
 	while(i < 100) 
 	{ 
 		system("cls"); 
 		load[i++] = '#'; 
 		load[i] = '\0'; 
  
		printf("\n\n\nCARREGANDO TESTE...\n\n[%-100s] %%%d", load,i); 
 		Sleep(100); 
 	} 
 
 system("cls"); 
 printf("\n"); 
	int resultado = rand() % 2;
    srand(time(NULL));
    clearScreen();

    for (int i = 0; i < 5; i++) {
    	for (int j = 0; j < 200; j++) {
      		int x = rand() % 50;
      		int y = rand() % 25;
      		int color = rand() % 7 + 31;
      		drawBlock(x, y, color);
    }
    Sleep(1000);
    clearScreen();
  }

  	setColor(0);
  	
  	if(resultado == 1){
		cout<<"\n\nTESTE DE DISPLAY REALIZADO COM SUCESSO!\n"<<endl;
		Sleep(1000);
	}
	else{
		cout<<"\n\nERRO NO TESTE DE DISPLAY!\n"<<endl;
		Sleep(1000);
	}
	
	return resultado;
}
				
void repetedisplay(){
				int ret;
				int i;
				printf("INICIANDO TESTE...\n");
				testedecoresbar();
				
				Sleep(10);
				
				limpatela();
				printf("\n1- Voltar ao menu\n");
				printf("2- sair\n");
				
				scanf("%d",&ret);
				fflush(stdin);

				if(ret == 1){
				x = 0;
				*ponteiro = x;
				i++;
			}
				else{			
				limpatela();
				exit(0);
			}
				}

void repeteram(){
				int ret;
				int i;
				printf("INICIANDO TESTE...\n");
				testeRAM();
				
				Sleep(10);
				
				limpatela();
				printf("\n1- Voltar ao menu\n");
				printf("2- sair\n");
				
				scanf("%d",&ret);
				fflush(stdin);

				if(ret == 1){
				x = 0;
				*ponteiro = x;
				i++;
			}
				else{			
				limpatela();
				exit(0);
			}
	}
				
void repeteadc(){
	int ret;
	int i;
	Sleep(100);
	printf("INICIANDO TESTE...\n");
	testeadc();
	
	limpatela();
	printf("\n1- Voltar ao menu\n");
	printf("2- sair\n");
				
	scanf("%d",&ret);
	fflush(stdin);

	if(ret == 1){
		x = 0;
		*ponteiro = x;
		i++;
	}
	else{			
		limpatela();
		exit(0);
	}
}



void printmenu(){
	limpatela();
	if(x < 7){
		printf("1-TESTE DE MEM�RIAS\n");
		printf("2-TESTE DE DISPLAY\n");
		printf("3-TESTE DE ADC\n");
		printf("4-TESTE DE COMUNICA��O\n");
		printf("5-TESTE DE I/O\n");
		printf("6-PROXIMA TELA --->\n");
	}
	
	else if(x == 7){
		printf("7- PROXIMA TELA --->\n");	
	}
		
	else if(x == 8){
		printf("8- PROXIMA TELA --->\n");	
	}
		
	else{
		printf("9- TESTE DE ALIMENTA��O --->\n");
	}	

	
}


int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int menu = 0,i = 0,control,ret;
	int x = 0;

	
	while(i<30){
			
		int i;
		printmenu();
	
		printf("\nEscolha um item:");
		scanf("%d", &menu);
		fflush(stdin);
	
		switch(menu){
			case 1:
				limpatela();
				printf("----- MEM�RIA -----\n");
				printf("\n");
				printf("1-LEITURA DE RAM\n");
				printf("2-ESCRITA DE RAM\n");
				printf("\n");
				printf("3- <---TELA ANTERIOR\n");
			
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repeteram();
	
				}
				else if(control == 2){
					repeteram();
				}
				else{
					i++;
				}
			limpatela();	
			break;
		
			case 2:
				limpatela();
				printf("----- DISPLAY -----\n");
				printf("\n");
				printf("1-TESTE DE CORES\n");
				printf("2- <---TELA ANTERIOR\n");
				printf("\n");
				printf("\n");
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repetedisplay();
				}
				
				else{
					i++;
				}
	
			limpatela();
			break;
			
			case 3:
				limpatela();
				printf("---- ADC ----\n");
				printf("\n");
				printf("1-TESTE DE COUNTS\n");
				printf("2- <---TELA ANTERIOR\n");
				printf("\n");
				printf("\n");
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repeteadc();
				}
				
				else{
					i++;
				}
	
			limpatela();
			break;
				
			case 4:
				limpatela();
				printf("---COMUNICA��O---\n");
				printf("1-TESTE DE ETHERNET\n");
				printf("2-TESTE DA SERIAL\n");
				printf("3-TESTE DE USB\n");
				printf("4-TESTE DE WLAN\n");
				printf("5-<--- TELA ANTERIOR\n");
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repete();
	
				}
				
				else if(control == 2){
					repete();
				}
				
				else if(control == 3){
					repete();
				}
				
				else if(control == 4){
					repete();
				}
					
				else{
					i++;
				}
				
			limpatela();	
			break;
			
			case 5:
				limpatela();
				printf("---- I/O ----\n");
				printf("1-TESTE DE ENTRADA\n");
				printf("2-TESTE DE SAIDA\n");
				printf("3-<---TELA ANTERIOR\n");
				printf("\n");
				printf("\n");
				
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repete();
	
				}
				else if(control == 2){
					repete();
				}
				else{
					i++;
				}
				
			limpatela();	
			break;
		
			
			case 6:
				limpatela();
				
				printf("1-TESTE DE JUMPER\n");
				printf("2-TESTE DE CRIPTO\n");
				printf("3-TESTE DE TEMPERATURA\n");
				printf("4-CONFIGURA��O FILTRO\n");
				printf("5-<--- TELA ANTERIOR\n");
				printf("6-PROXIMA TELA --->\n");
				printf("\nEscolha um item:");
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repete();
	
				}
				
				else if(control == 2){
					repete();
				}
				
				else if(control == 3){
					repete();
				}
				
				else if(control == 4){
					repete();
				}
				
				else if(control == 5){
					i +=32;
				}
				
				else if(control == 6){
					x = 7;
					*ponteiro = x;
					break;
				}
			
				else{
					i++;
	
				}
				
			limpatela();	
			break;	
			
			default:
				printf("Valor incorreto...\n");
				Sleep(100);
				i++;
				break;
			
			}
		switch(menu){
			case 7:
			limpatela();
			printf("1-TESTE DE RTR\n");
			printf("2-TESTE SENSOR RODADOS\n");
			printf("3-TESTE LA�O INDUTIVO\n");
			printf("4-TESTE DE JTAG\n");
			printf("5- <--- TELA ANTERIOR\n");
			printf("6- PROXIMA TELA --->\n");
			printf("\nEscolha um item:");	
			scanf("%d",&control);
			fflush(stdin);
				
				if(control == 1){
					repete();
	
				}
				
				else if(control == 2){
					repete();
				}
				
				else if(control == 3){
					repete();
				}
				
				else if(control == 4){
					repete();
				}
				
				else if(control == 5){
					i +=32;
				}
				
				else if(control == 6){
					
					x = 8;
					*ponteiro = x;
					
					break;
				}
			
				else{
					i++;
	
				}
				
			limpatela();	
			break;
			
			case 8:
				limpatela();
				printf("1-TESTE DE ALIMENTA��O\n");
				printf("2-TESTE DE ISP\n");
				printf("3-TESTE LA�O INDUTIVO\n");
				printf("4-TESTE DE RODADOS\n");
				printf("5-MENU INICIAL\n");
				printf("\nEscolha um item:");			
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					x = 9;
					*ponteiro = x;
					i++;
				
				}
				
				else if(control == 2){
					repete();
				}
				
				else if(control == 3){
					repete();
				}
				
				else if(control == 4){
					repete();
				}
				
				else{
					x = 0;
					*ponteiro = x;
					i++;
				}
				
			limpatela();	
			break;
			
			case 9:
				limpatela();
				printf("----ALIMENTA��O----\n");
				printf("\n");
				printf("1-TESTE DE BATERIA\n");
				printf("2-TESTE DA FONTE\n");
				printf("\n");
				printf("3-<--- TELA ANTERIOR\n");
				printf("\nEscolha um item:");	
				scanf("%d",&control);
				fflush(stdin);
				
				if(control == 1){
					repete();
	
				}
				else if(control == 2){
					repete();
				}
				else{
					x = 8;
					*ponteiro = x;
					i++;
				}
			limpatela();	
			break;
			
			default:
				printf("Valor incorreto...\n");
				Sleep(100);
				i++;
				break;
			
		}
	}
		
}

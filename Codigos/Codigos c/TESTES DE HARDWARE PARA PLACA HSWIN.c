#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

void testeleituraderam(){
	
	system("COLOR 0e");
    system("cls");
    printf("\e[?25l");

    //Set ASCII to print special character.
    //Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;

    cout << "\n\n\n\t\t\t\tLoading...";
    cout << "\n\n\n\t\t\t\t";

    for(int i = 0; i < 25; i++)
        cout << (char)bar1;

    cout <<"\r";
    cout <<"\t\t\t\t";
    for(int i = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }

    cout<<"\n\t\t\t\t" << (char)1 <<"!";
    system("Pause");

	
}

void limpatela(){
	system("cls");
}

int main(){
	
	int menu,i = 0;
	
	while(i<=30){
	
	printf("Digite um número:");
	scanf("%d", &menu);
	fflush(stdin);
	limpatela();
	
	printf("1-TESTE DE MEMÓRIAS\n");
	printf("2-TESTE DE DISPLAY\n");
	printf("3-TESTE DE ADC\n");
	printf("4-TESTE DE COMUNICAÇÃO\n");
	printf("5-TESTE DE I/O\n");
	printf("6-PROXIMA TELA --->\n");
	
	
	switch(menu){
		case 1:
			limpatela();
			printf("----- MEMÓRIA -----\n");
			printf("\n");
			printf("1-LEITURA DE RAM\n");
			printf("2-ESCRITA DE RAM\n");
			printf("\n");
			printf("3-<--- TELA ANTERIOR\n");
		
		case 2:
			limpatela();
			printf("----- DISPLAY -----\n");
			printf("\n");
			printf("1-TESTE DE CORES\n");
			printf("\n");
			printf("\n");
			printf("\n");
		
		case 3:
			limpatela();
			printf("---- ADC ----\n");
			printf("");
			printf("");
			printf("");
			printf("");
			printf("");
			
		case 4:
			limpatela();
			printf("---COMUNICAÇÃO---\n");
			printf("1-TESTE DE ETHERNET\n");
			printf("2-TESTE DA SERIAL\n");
			printf("3-TESTE DE USB\n");
			printf("4-TESTE DE WLAN\n");
			printf("5-<--- TELA ANTERIOR\n");
		
		case 5:
			limpatela();
			printf("---- I/O ----\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
		
		case 6:
			limpatela();
			printf("TESTE DE JUMPER\n");
			printf("TESTE DE CRIPTO\n");
			printf("TESTE DE TEMPERATURA\n");
			printf("CONFIGURAÇÃO FILTRO\n");
			printf("<--- TELA ANTERIOR\n");
			printf("PROXIMA TELA --->\n");
		
		case 7:
			limpatela();
			printf("TESTE DE RTR\n");
			printf("TESTE SENSOR RODADOS\n");
			printf("TESTE LAÇO INDUTIVO\n");
			printf("TESTE DE JTAG\n");
			printf("<--- TELA ANTERIOR\n");
			printf("PROXIMA TELA --->\n");
		
		case 8:
			limpatela();
			printf("TESTE DE ALIMENTAÇÃO\n");
			printf("TESTE DE ISP\n");
			printf("\n");
			printf("\n");
			printf("<--- TELA ANTERIOR\n");
			printf("MENU INICIAL\n");
		
		case 9:
			limpatela();
			printf("----ALIMENTAÇÃO----\n");
			printf("\n");
			printf("1-TESTE DE BATERIA\n");
			printf("2-TESTE DA FONTE\n");
			printf("\n");
			printf("3-<--- TELA ANTERIOR\n");	
		
		}
	}
	
}

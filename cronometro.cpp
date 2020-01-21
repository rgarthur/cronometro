#include <stdio.h>
#include <windows.h>
int main(){
//vc vai receber umnumero digitado e ira fazer um contador de 0 ate esse numero com intervalo de um segundo a cada contagem/numero usar for ou while
	int x,contador;
	contador = 0;
	printf("man namorevers lansa a braba que eu vou fazer um cronometro:");
	scanf("%d", &x);
	system("cls");
	while (contador<=x){
		printf("%d\n", contador);
		contador++;
		Sleep(1000);
		system("cls");
	}
	printf("obrigado por lansar a braba");
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int x;
	time_t start,stop;
	//gera o algoritimo
	char anterior, escolhido, Lista[6] = {'B','D','U','F','L','R'}, Modificadores[3] = {'`','2',' '};
	srand(time(NULL));
	x = 0;
	while(x <= 25){
		anterior = escolhido;
		escolhido = Lista[rand() %5];
		if(anterior != escolhido){
			printf("%c%c ",escolhido,Modificadores[rand() %3]);
			x++;
		}
	}
	//temporiza a solucao em segundos(NOTA: descobrir como temporizar milisegundos tambem)
	printf("\naperte enter para comecar");
	getchar();
	start = time(NULL);
	printf("aperte enter para parar");
	getchar();
	stop = time(NULL);
	printf("tempo: %.0f segundos\n", ((double)(stop - start)));
}


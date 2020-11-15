#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LONG 25 /* Tamanho do algoritimo */

/*
 * Este programa mostra um algoritimo que não se repete, evita algoritimos fracos
 * (Ex.: L, R, L', R', etc.), e também mede o tempo de solução.
 * 
 * TODO: adicionar milésimos de segundo; guardar tempos, calcular médias, etc; 
 * Adicionar o resultado visual do cubo.
 */

int main()
{	
	int x, num;
	time_t start,stop;
	char anterior, escolhido, 
		lista[6] = {'D','B','L','U','F','R'}, 
		modificadores[3] = {'`','2',' '};

	/* gera o algoritimo */
	srand(time(NULL));
	for( x = 0 ; x <= LONG ; ) {
		anterior = escolhido;
		num = rand() %6;
		if(anterior != (escolhido = lista[num]) && (anterior != lista[num-3] || anterior != lista[num+3])) { 
			printf("%c%c ", escolhido, modificadores[rand() %3]);
			x++;
		}
	}

	/* interage com o usuario e temporiza a solucao em segundos */
	getchar();
	start = time(NULL);
	printf("aperte qualque tecla para parar");
	getchar();
	stop = time(NULL);
	printf("%.0fs\n", ((double)stop - start));
}


#include<stdio.h>
#include<stdlib.h>
#include <time.h>
float getRand() {
	return rand() / (RAND_MAX + 1.0);
}
int main() {
	srand(time(NULL));
	getRand();
	char back[3][3] = { { '.','.','.' },{ '.','.','.' },{ '.','.','.' } };
	int i, k;//cross,upright
	k = 0;
	for (i = 0; i < 3; i++) {
		printf(" %c ", back[k][i]);
		if (i == 2 && k <= 1) {
			i = -1;
			k++;
			printf("\n");
		}
	}
	int turn;
	for (turn = 2; turn <= 5; turn++) {
		printf("\n\n\n\n\n\n\n\n\n\ninput a number 1-9\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		int putx = 0;
		scanf_s("%d", &putx);
		--putx;
		int a, b;
		a = putx / 3;
		b = putx % 3;
		back[a][b] = { 'x' };
			float n = getRand();
			int putO = n * 9 + 1;
			a = putO / 3;
			b = putO % 3;
			int repeat=1;
				for (repeat=1; ;repeat++) {
				if (back[a][b] == 'x'&&'O') {
					n = getRand();
					putO = n * 9 + 1;
					a = putO / 3;
					b = putO % 3;
				}
				else {
					back[a][b] = 'O';
					break;
				}
			}
			k = 0;
			for (i = 0; i < 3; i++) {
				printf(" %c ", back[k][i]);
				if (i == 2 && k <= 1) {
					i = -1;
					k++;
					printf("\n");
				}
			}
		}
	
	system("pause");
		
}
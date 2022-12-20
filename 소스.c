#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));

	for (int i = 1; i <= 10; i++) {
		int oper = rand() % 4;
		int a = rand() % 10;
		int b = rand() % 10;
		int c;
		switch (oper) {
		case 0:
			printf("[%d/10] %d + %d = ", i, a, b);
			scanf_s("%d", &c);
			if (c == a + b) {
				printf("Correct!\n");
			}
			else {
				printf("Wrong!\n");
			}
			break;
		case 1:
			printf("[%d/10] %d - %d = ", i, a, b);
			scanf_s("%d", &c);
			if (c == a + b) {
				printf("Correct!\n");
			}
			else {
				printf("Wrong!\n");
			}
			break;
		case 2:
			printf("[%d/10] %d * %d = ", i, a, b);
			scanf_s("%d", &c);
			if (c == a + b) {
				printf("Correct!\n");
			}
			else {
				printf("Wrong!\n");
			}
			break;
		case 3:
			printf("[%d/10] %d / %d = ", i, a, b);
			scanf_s("%d", &c);
			if (c == a + b) {
				printf("Correct!\n");
			}
			else {
				printf("Wrong!\n");
			}
			break;
		}

		
	}
}

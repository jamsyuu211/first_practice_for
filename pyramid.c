#include "Header.h"

//좌우대칭 삼각형형
/*int main(void) {
	for (int i = 0; i < 5; i++) {
		for(int j = 5 - i; j > 1; j--) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
		
	}

	return 0;
}*/

int main(void) {
	int input;
	printf("몇층으로 쌓겠습니까?:");
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		for (int j = input - i; j > 1; j--) {
			printf(" ");
		}
		for (int k = 0; k < (i * 2) + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
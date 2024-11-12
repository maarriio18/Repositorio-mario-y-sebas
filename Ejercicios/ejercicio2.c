#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char palabra[5][8] = {"perro", "gato", "pájaro", "toro", "gallo"};

	for (int i = 0; i < 5; i++) {
		int contiene_a = 0;

		for (int j = 0; j < strlen(palabra[i]); j++) {
			if (palabra[i][j] == 'a') {
				contiene_a = 1;
				break;
			}
		}

		if (contiene_a == 0) {
			printf("%s\n", palabra[i]);
		}
	}

	return 0;
}


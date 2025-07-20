#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    char letters[5][15]={0, };

	for (int i = 0; i < 5; i++)
		scanf("%s", letters[i]);

	for (int i = 0; i < 15; i++) {
		for (int k = 0; k < 5; k++) {
			if (letters[k][i] != NULL)
				printf("%c", letters[k][i]);
		}
	}

	return 0;
}
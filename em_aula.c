#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ehSubsequencia(char *texto, char *palavra) {
    int i = 0, j = 0;

    while (texto[i] != '\0' && palavra[j] != '\0') {
        if (texto[i] == palavra[j]) {
            j++;
        }
        i++;
    }

    if (palavra[j] == '\0') {
        return true;
    } else {
        return false;
    }
}

char* findLongestWord(char* s, char** dictionary, int dictionarySize) {
    char *melhor = malloc(1001 * sizeof(char));
    
    melhor[0] = '\0';

    for (int i = 0; i < dictionarySize; i++) {
        if (ehSubsequencia(s, dictionary[i])) {

            if (strlen(dictionary[i]) > strlen(melhor)) {
                strcpy(melhor, dictionary[i]);
            }
            else if (strlen(dictionary[i]) == strlen(melhor)) {
            }
        }
    }

}

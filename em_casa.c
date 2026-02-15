#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* ============================================================================================
   Função ehSubsequencia: Verifica se a string "palavra" é uma subsequência da string "texto".
   ============================================================================================ */

bool ehSubsequencia(char *texto, char *palavra) {
    int i = 0, j = 0;

    int tamanhoTexto = strlen(texto);
    int tamanhoPalavra = strlen(palavra);

    while (i < tamanhoTexto && j < tamanhoPalavra) {
        if (texto[i] == palavra[j]) {
            j++;
        }
        i++;
    }

    return j == tamanhoPalavra;
}

/* ==================================================================================================
   Função findLongestWord: Encontrar a maior palavra do dicionário que seja subsequência da string s.
   ================================================================================================== */

char* findLongestWord(char* s, char** dictionary, int dictionarySize) {

    char *melhor = (char*)malloc(1001 * sizeof(char));
    melhor[0] = '\0';

    for (int i = 0; i < dictionarySize; i++) {

        char *palavraAtual = dictionary[i];

        if (ehSubsequencia(s, palavraAtual)) {

            int tamanhoAtual = strlen(palavraAtual);
            int tamanhoMelhor = strlen(melhor);

            if (tamanhoAtual > tamanhoMelhor) {
                strcpy(melhor, palavraAtual);
            }
            else if (tamanhoAtual == tamanhoMelhor &&
                     strcmp(palavraAtual, melhor) < 0) {
                strcpy(melhor, palavraAtual);
            }
        }
    }

    return melhor;
}

/* ==================================================================
   Função Main: Testar a função findLongestWord.
   ================================================================== */

int main() {

    char s[] = "abpcplea";
    char *dictionary[] = {"ale", "apple", "monkey", "plea"};

    char *resultado = findLongestWord(s, dictionary, 4);

    printf("Resultado: %s\n", resultado);

    free(resultado);

    return 0;
}

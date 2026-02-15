# Trabalho de Implementação 4 - AED I

Nome: Silvana Dias
Turma: M2

- Sobre o código:
eu criei uma função auxiliar chamada ehSubsequencia que usa dois ponteiros para verificar se uma palavra do dicionário 
pode ser formada a partir da string s removendo caracteres. Eu percorro s e a palavra ao mesmo tempo, avançando o 
ponteiro da palavra apenas quando os caracteres coincidem; se ao final todos os caracteres da palavra forem encontrados, 
ela é subsequência. Na função principal, eu percorro todas as palavras do dicionário e, para cada uma que é subsequência, 
comparo com a melhor palavra encontrada até o momento. Primeiro priorizo a palavra de maior tamanho e, em caso de empate, 
uso strcmp para escolher a menor lexicograficamente. Ao final do laço, retorno a string armazenada como melhor resultado, 
que pode ser vazia caso nenhuma palavra seja válida.

- Sobre a complexidade:
Tempo – O(N × M × K):
Percorro todas as N palavras do dicionário e, para cada uma, verifico se é subsequência de s. 
A verificação de subsequência percorre a string s (tamanho M) e a palavra atual (tamanho até K). 
Assim, no pior caso, para cada palavra posso percorrer praticamente toda s e toda a palavra, resultando em uma 
complexidade aproximada de O(N × M × K) no cenário mais conservador.

Espaço – O(1):
Não utilizo estruturas auxiliares proporcionais à entrada, apenas variáveis simples e uma string para armazenar o 
melhor resultado. Portanto, o uso de memória extra é constante, resultando em O(1) de complexidade espacial.

- Testes feitos:
s = "abpcplea"
dictionary = ["ale", "apple", "monkey", "plea"]
Esperado: "apple"

s = "abpcplea"
dictionary = ["ale", "apple", "monkey", "plea"]
Esperado: "apple"

s = "bab"
dictionary = ["ba", "ab"]
Esperado: "ab"

s = "abcde"
dictionary = ["ace", "acd", "ade"]
Esperado: "acd"

s = "aaaaa"
dictionary = ["aaa", "aaaa", "aa"]
Esperado: "aaaa"

s = "xyz"
dictionary = ["a", "b", "c"]
Esperado: ""

s = "abcdef"
dictionary = ["abcdef", "abc", "abf"]
Esperado: "abcdef"

s = "programacao"
dictionary = ["pro", "grama", "programa", "acao"]
Esperado: "programa"


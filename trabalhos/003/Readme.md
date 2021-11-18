# TAD Matriz

![](figura.jpg)

O objetivo desta atividade é implementar um TAD chamado Matriz usando obrigatoriamente Programação Orientada a Objetos. O TAD **Matriz** encapsula uma matriz com n linhas e m colunas, sobre a qual podemos fazer as seguintes operações:

- criar matriz com n linhas e m colunas, alocada dinamicamente
- destruir a matriz alocada dinamicamente
- acessar valor na posição (i,j) da matriz
- atribuir valor ao elemento na posição (i,j) da matriz
- retornar o número de linhas da matriz
- retornar o número de colunas da matriz
- imprimir a matriz
- multiplicar a matriz atual por uma matriz passada por parâmetro e retornar a matriz resultante
- somar a matriz atual com uma matriz passada por parâmetro e retornar a matriz resultante

---
## Observações
- Lembre-se que nem sempre é possível multiplicar ou somar duas matrizes. 
- Para que a soma dê certo, as duas matrizes precisam ter as mesmas dimensões
- Para que a multiplicação dê certo, o número de colunas da primeira matriz deve ser igual ao número de linhas da segunda. 

## Requisitos

- O código do TAD **Matriz** deve ser dividido em dois arquivos: *Matriz.h* e *Matriz.cpp* como explicado em sala. O código do arquivo *Matriz.h* já foi escrito e pode ser encontrado em anexo logo abaixo nesta atividade. Você precisa apenas implementar as funções-membro da Classe Matriz no arquivo Matriz.cpp, que está vazio.

- Além disso, assim como no exercício do TAD Circle, o código do programa *main.cpp* já está feito. O programa principal lê comandos passados como entrada e manipula uma ou mais matrizes. Os comandos aceitos pelo menu principal estão listados abaixo.

### Comandos do programa principal

| Comando | Significado |
| --- | --- |
| `cria l c ` | Instancia um objeto da Classe Matriz com l linhas e c colunas. Lê os l x c valores e inicializa o objeto matriz |
| `libera` | Libera todos os objetos criados |
| `exit` | Sai do programa liberando todos os objetos criados |
| `imprime k` | Imprime a (k+1)-ésima matriz criada |
| `nlinhas k` | Imprime o número de linhas da (k+1)-ésima matriz criada |
| `ncolunas k` | Imprime o número de linhas da (k+1)-ésima matriz criada |
| `valor i j k` | Imprime o valor contido na posição (i,j) da (k+1)-ésima matriz criada |
| `soma p q` | Soma a (p+1)-ésima matriz com a (q+1)-ésima matriz e imprime a matriz resultante na tela. |
| `multiplica p q` | Multiplica a (p+1)-ésima matriz com a (q+1)-ésima matriz e imprime a matriz resultante na tela. |


## Esqueleto

Acima desta atividade, você encontra uma pasta chamada **projeto** contendo um esqueleto da atividade.  Baixe todo esse projeto no seu computador. Não mexa no arquivo main.cpp pois ele já está pronto para uso. O único arquivo que você deve completar para finalizar esta atividade é o arquivo **Matriz.cpp**.


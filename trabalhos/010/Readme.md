# Lista sequencial de tamanho redimensionável


As listas lineares estão entre os tipos abstratos de dados de manipulação mais simples. Como vimos em aula, o tipo de armazenamento de uma lista linear pode ser classificado de acordo com a posição relativa na memória de dois nós consecutivos na lista. O caso em que cada dois nós da lista estão em posições contı́guas de memória corresponde à **alocação sequencial** de memória. Já o caso em que não é garantido que cada dois nós consecutivos estejam em posições contı́guas de memória corresponde à **alocação encadeada**. A escolha de um ou outro tipo depende essencialmente das operações que serão executadas sobre a lista, do número de listas envolvidas na operação, bem como das caracterı́sticas particulares dessas listas.

A maneira mais simples de manter uma lista linear na memória do computador é alocar seus nós em posições contı́guas (alocação sequencial). Nesse caso, o endereço real do *(j + 1)*-ésimo nó da lista se encontra *C* unidades adiante daquele correspondente ao *j*-ésimo elemento. A constante *C* é o número de bytes de memória que cada nó ocupa. A correspondência entre o ı́ndice do array e o endereço real é feita automaticamente pela linguagem de programação quando da tradução do programa.

Em aula, estudamos uma implementação de lista linear usando alocação sequencial (lista sequencial). Na implementação que estudamos, a estrutura de dados (o vetor) é encapsulada na classe **SeqList** por meio da utilização do modificador `private`, enquanto as interfaces das funções tornam-se visı́veis por meio do modificador `public`. Deste modo, graças ao encapsulamento, o programador pode modificar tanto a
estrutura de dados quanto a implementação das operações sem provocar alterações nos programas que utilizam a classe **SeqList**, desde que as interfaces das funções sejam preservadas.

A implementação de listas lineares por meio de vetores tem como vantagem a economia de memória, já que não gasta-se bytes com ponteiros. Uma segunda vantagem consiste no tempo constante para acessar um nó da lista, dado que sua posição seja conhecida. Porém, como desvantagem citamos o custo para inserir ou retirar itens da lista, que pode causar um deslocamento de todos os itens, no pior caso. Além disso, em aplicações em que não existe previsão sobre o crescimento da lista, a utilização de vetores pode exigir realocação de memória. Essa é uma operação de alto custo em termos de tempo e memória, pois é preciso alocar uma nova área com mais posições do que a atual e copiar todos os itens para ela. Apesar dessa desvantagem, listas sequenciais apresentam melhor performance no caso em que operações de acesso a um nó são frequentemente executadas.

---

## Problema

Uma caracterı́stica limitante da estrutura de dados **SeqList** é que a capacidade total da lista é fixa (não muda) uma vez que ela foi criada. 

- Com o intuito de eliminar essa limitação, reimplemente a estrutura de dados **SeqList** vista em aula para sempre permitir a inserção de novos itens na lista. Para isso é preciso modificar a operação de inserção `push_back(int elemento)` da seguinte forma: toda vez que a inserção de um novo item esgotar a memória disponı́vel no vetor, uma nova área de memória com capacidade maior deve ser alocada e o conteúdo do vetor anterior deve ser copiado para ela. 
    - Uma ideia para essa implementação é: toda vez que a lista ficar cheia, criar um novo array de inteiros com o dobro da capacidade do array antigo e, então, copiar todos os dados do array antigo para o array novo. Não esquecendo claro de liberar a memória que foi alocada para o array antigo (sempre certifique-se de que não haja vazamento de memória na sua estrutura de dados e no seu programa como um todo).

- Após sucessivas operações de retirada `remove_back()`, a razão do número de itens no vetor pela sua capacidade pode se tornar muito pequena. Nesse caso, uma operação para diminuir a quantidade de memória total utilizada pelo vetor também deve ser implementada.
    - Ideia: a fim de diminuir a capacidade do array, uma operação inversa a operação descrita no caso anterior pode ser executada aqui. Certifique-se de liberar a memória do array antigo.


---

## Código Base

Um código base para este exercício está disponível mais acima nesta página, na pasta **Projeto**. Baixe esta pasta no seu computador, complete a atividade e depois envie a solução pelo Moodle.
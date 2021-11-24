# Vetor de Consulta

![](figura.jpg)

---

## Objetivo

Há um vetor de strings de entrada e um vetor de strings de consulta. Para cada sequência de consultas, determine quantas vezes ela ocorre na lista de sequências de entrada.

Por exemplo, dada **entrada = [‘ab’,‘ab’,‘abc’ ]** e **consultas = [‘ab’,‘abc’,‘bc’]**, encontramos duas instâncias de **‘ab’**, uma instância de **‘abc’** e zero instâncias de **‘bc’**. Para cada consulta, adicionamos um elemento ao nosso vetor de retorno.

---

## Descrição da função

Implemente a função **matchingStrings**. A função deve retornar um vetor de números inteiros representando a frequência de ocorrência de cada sequência de consultas em sequências .

*matchingStrings* possui os seguintes parâmetros:

- *strings* - um vetor de strings para pesquisar
- *consultas* - um vetor de cadeias de consulta

---

## Formato de entrada

- Linha 1: tamanho do vetor de consultas
- Linha 2: vetor de consultas
- Linha 3: tamanho do vetor de buscas
- Linha 4: vetor de buscas

---

## Formato de saída

Retorne um vetor inteiro dos resultados de todas as consultas em ordem.

---

## Entradas e Saídas de amostra

```
>>>>>>>> 01
4 
aba baba aba xzxb 
3
aba xzxb ab
========
2 1 0
<<<<<<<<


>>>>>>>> 02
2
rw rw 
3 
y rw iowz
========
0 2 0
<<<<<<<<


>>>>>>>> 03
3
c c mpikv
8
f c o uplbd o zl xoi mpikv
========
0 2 0 0 0 0 0 1
<<<<<<<<


>>>>>>>> 04
7
qu qu pg qu qu cjyrx y
6
o qu sxsse b pd yuv
========
0 4 0 0 0 0
<<<<<<<<


>>>>>>>> 05
4
jphjf urx xs ijn
7
fzsjg u hb daldh mgzd hgv jmqh
========
0 0 0 0 0 0 0
<<<<<<<<


>>>>>>>> 06
5
sdurp tnl himf tnl tnl
6
y sdurp tvaez tnl undx u
========
0 1 0 3 0 0
<<<<<<<<


>>>>>>>> 07
7
axx svw xhac svw svw wfsy svw
5
ms axx svw svw svw
========
0 1 4 4 4
<<<<<<<<


>>>>>>>> 08
3
yakwy hkfx hkfx
10
v uqojw hkfx mo o qzb yakwy fsl evhb b
========
0 0 2 0 0 0 1 0 0 0
<<<<<<<<


>>>>>>>> 09
5
odbor aeoow dbpak hwsh pwkr
7
wqtmc vpje ia vn kajln dwe zi
========
0 0 0 0 0 0 0
<<<<<<<<
```
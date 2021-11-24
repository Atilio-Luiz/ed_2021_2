# Fila de ingressos

![](figura.jpg)

---

Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de ingressos aumentou consideravelmente. Como as filas estão cada vez maiores, pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando assim vaga para outras pessoas. Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente. Sendo assim, nunca existe um espaço vago entre duas pessoas. A fila inicialmente contém *N* pessoas, cada uma com um identificador diferente.

Joãozinho sabe o estado inicial dela e os identificadores em ordem das pessoas que deixaram a fila. Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila, Joãozinho deseja saber o estado final da fila.

---

## Entrada

- A primeira linha contém um inteiro *N* representando a quantidade de pessoas inicialmente na fila.
- A segunda linha contém *N* inteiros representando os identificadores das pessoas na fila. O primeiro identificador corresponde ao identificador da primeira pessoa na fila. É garantido que duas pessoas diferentes não possuem o mesmo identificador.
- A terceira linha contém um inteiro *M* representando a quantidade de pessoas que deixaram a fila.
- A quarta linha contém *M* inteiros representando os identificadores das pessoas que deixaram a fila, na ordem em que elas saíram. É garantido que um mesmo identificador não aparece duas vezes nessa lista.

---

## Saída

Seu programa deve imprimir uma linha contedo *N-M* inteiros com os identificadores das pessoas que permaneceram na fila, em ordem de chegada.

---

## Entradas e Saídas de amostra

```
>>>>>>>> 01
4
10 9 6 3
1
3
========
10 9 6 
<<<<<<<<

>>>>>>>> 02
8
5 100 9 81 70 33 2 1000
3
9 33 5
========
100 81 70 2 1000 

>>>>>>>> 03
10
817 364 524 565 132 499 412 563 297 638 
7
364 817 412 132 499 524 297
========136 650 622 281
9
2 840 316 408 711 537 296 565 735 
5
316 565 408 735 2
========
840 711 537 296

>>>>>>>> 05
7
831 565 110 581 726 770 990 
3
770 581 565
========
831 110 726 990

>>>>>>>> 06
3
11 74 816 
1
74
========
11 816

>>>>>>>> 07
8
992 854 103 984 485 949 283 672 
5
283 103 485 984 949
========
992 854 672

>>>>>>>> 08
6
867 123 560 217 606 175 
1
606
========
867 123 560 217 175

>>>>>>>> 09
5
436 984 930 101 946 
1
101
========
436 984 930 946

>>>>>>>> 10
10
186 739 126 213 75 174 447 658 856 365 
7
856 174 186 447 75 658 126
========
739 213 365

>>>>>>>> 11
9
652 47 136 650 578 622 923 281 100 
6
652 578 923 100 47 100
========
136 650 622 281

>>>>>>>> 12
3
229 402 828 
1
828
========
229 402
```

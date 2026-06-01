# Raciocínio da questão:

O exercício consiste em você fazer o print de um gráfico de barra baseado em valores do vetor.

Meu raciocínio foi o seguinte: primeiramente, eu li todos os valores do nosso vetor "v" e peguei o maior valor que aparece, o qual nos dirá o tamanho máximo de altura da nossa matriz. Depois, eu printei a matriz comparando o valor do vetor com "i+1", note que: o valor de "i+1" é o valor da nossa variável "maior" subtraída a cada laço por 1. Ou seja:

- Eu começo do maior valor e printo 1 na posição de todos os valores do vetor que têm esse valor "maior" e 0 aos que não têm.
- Eu faço a subtração: "maior"-1 no próximo laço do nosso loop.
- Repito o passo 1.

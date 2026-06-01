# Raciocínio da questão:

O exercício pergunta se você consegue de fato colocar a quantidade certa de café e leite na xícara, respeitando os limites de leite impostos pelos valores A e B.

O meu raciocínio para resolver a questão foi o seguinte: Nós começamos com o valor máximo da capacidade da xícara C, preenchida totalmente de leite. A cada laço do loop, nós conferimos se estamos dentro do nosso limite (entre os valores A e B).

- Se estivermos dentro do nosso limite de leite, colocamos a variável booleana de controle como True e damos um break no nosso loop.
- Se não estivermos, adicionamos exatamente uma dose de café (diminuindo então a quantidade de leite). Note que: temos que necessariamente adicionar a quantidade D de café e fazemos isso até ultrapassarmos a capacidade da xícara, se chegarmos ao final e não tivermos entrado no limite [A,B] em nenhum laço, falamos que não é possível resolver esse problema.

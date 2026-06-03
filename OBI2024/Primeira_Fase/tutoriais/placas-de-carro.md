# Raciocínio da questão:

O exercício nos dá vários tipos de placas e pergunta se elas estão de acordo com o padrão antigo, com o padrão novo ou nenhum dos dois (segundo as especificações desses padrões descritas no enunciado).

Para evitar ficar fazendo a comparação do caracter com os números ou com as letras diversas vezes, eu fiz apenas duas funções: uma para determinar se o caracter é uma letra (está entre "A" e "Z") e outra para determinar se o caracter é um número (está entre "0" e "9").

Com isso, eu apliquei primeiramente no meu IF a condição do tamanho da string dada (ATENÇÃO: fiz isso para evitar acessar elementos inválidos nas próximas condições do meu IF e dar RuntimeError). Depois, apliquei as funções citadas anteriormente e conferi em qual dos padrões citados no enunciado a string dada se enquadrava.

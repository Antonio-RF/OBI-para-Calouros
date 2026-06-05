# Raciocínio da questão:

O exercício nos dá o valor de V (a quantidade que vô João tinha) e o valor das três contas a pagar. O exercício nos pergunta qual o máximo de conta que conseguimos pagar.

O meu raciocínio foi o seguinte: eu li o inteiro V e depois as três contas em um vetor de tamanho 3. Após isso, eu ordenei o vetor das contas em ordem crescente com a função sort(). Com isso, eu fui vendo em ordem crescente das contas qual conta eu conseguia pagar:

- se eu conseguia pagar a conta i, eu descontava ela do meu valor V e aumentava a minha resposta em 1.
- se eu não conseguisse pagar essa conta, eu só ignorava. Note que: a partir da primeira conta que eu não consiga pagar, eu já poderia dar um "break" no meu for, pois todas as próximas contas serão maiores ou iguais a essa (pq meu vetor está ordenado em ordem crescente).

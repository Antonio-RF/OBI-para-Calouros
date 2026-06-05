# Raciocínio da questão:

O exercício nos dá uma matriz e diz que a cada consulta P nessa matriz, ele subtrai o valor na linha "tipo" e coluna "tamanho" da minha matriz, com tipo e tamanho passados. Caso o valor dessa matriz seja 0, eu devo ignorar.

Eu apenas li os valores na matriz que chamei de "v" e depois as P requisições de compra, conferindo antes de aumentar a minha resposta se o elemento v[tipo][tamanho] não era 0.

O mais chato nesse exercício era a declaração de matriz e também ficar cuidando de números 0-based no vetor/matriz (PRESTE SEMPRE MUITA ATENÇÃO NESSES VALORES).

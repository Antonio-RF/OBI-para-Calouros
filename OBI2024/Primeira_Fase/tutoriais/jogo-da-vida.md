# Raciocínio da questão:

O exercício pede para nós simularmos um jogo em uma matriz, em que cada elemento da matriz está vivo ou morto.

A entrada da matriz é bem chatinha, eu tive que ler como se cada linha fosse uma string e daí converter cada elemento dessa string (ou seja, cada número da matriz) do tipo CHAR para INT.

Outra coisa chatinha desse exercício é a declaração de matriz em c++, eu declarei a matriz "m" global para conseguir mexer nela na minha função e não precisar ficar passando ela no argumento da função. Consequentemente, eu tive que dar um resize nela na minha main, pois o tamanho dela ainda não estava definido.

O mais chato desse exercício é tratar os limites da matriz, pois se você está, por exemplo, na linha 0, você não pode acessar os elementos da linha i-1, ou seja, da linha 0-1 (pois ela não existe e daria RunTimeError). Então, fiz primeiramente uma função para pegar a quantidade de elementos vivos ao redor do elemento m[i][j] respeitando todos os limites.

Depois, para cada elemento, eu chamei essa função para saber quantos elementos vivos tinham ao redor desse elemento m[i][j] e apliquei as modificações necessárias em uma matriz chamada "ans". DETALHE MUITO IMPORTANTE: eu coloquei os resultados em uma matriz "ans" pois o meu estado atual sempre é a matriz "m", ou seja, se eu modificar o elemento diretamente na matriz "m", o próximo elemento que eu pegar vai se basear em um valor errado que foi atualizado agora pouco. Por isso, "m" só vira "ans" ao final de cada estado, quando eu já modifiquei todos os elementos de "m".

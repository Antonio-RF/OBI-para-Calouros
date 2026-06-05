# Raciocínio da questão:

O exercício nos dá vários valores que se ligam e nos pergunta se o caminho dado é válido, ou seja, se antes ele declarou que há uma ligação entre 2 valores adjacentes nesse vetor de caminhos dado.

O meu racíocinio para resolver essa questão foi fazer uma matriz de boolenos de tamanho S, em que cada elemento já inicia como 0 (indicando que não há uma conexão do elemento i com o elemento j na matriz, pois v[i][j]==0). Eu fui setando na minha matriz as conexões dadas, ou seja, eu lia dois valores que se ligavam X e Y e fui setando na minha matriz: v[X][Y]=1 e V[Y][X]=1 (bidirecional, como dito no enunciado).

Depois, eu li todos os P caminhos. Cada caminho i que eu lia, eu guardei os valores em um vetor e fui conferindo se havia uma conexão entre os elementos adjacentes desse vetor (um do lado do outro), ou seja, se o valor de v[x][y]==1. Se esse valor não fosse igual a 1 em algum momento do caminho, quer dizer que não há uma ligação entre os dois valores, portanto, não há um caminho entre eles. Caso todos os vizinhos nesse vetor de caminho possuissem v[vizinho1][vizinho2] == 1, eu incrementava 1 na minha resposta (há um caminho válido a mais).

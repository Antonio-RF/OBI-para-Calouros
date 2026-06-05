# Raciocínio da questão:

O exercício nos dá dois vetores de inteiros S1 e S2 e nos pergunta se S2 é uma subsequência de S1.

O meu raciocínio foi fazer um loop while com 2 ponteiros: um ponteiro "i" que aponta para um elemento em S1 e um ponteiro "j" que aponta para um elemento em S2. A cada iteração do meu loop While, eu incrementava 1 no "i". Caso o elemento em questão que eu estava vendo com o meu ponteiro "i" fosse igual ao elemento em questão do meu vetor S2 que eu estava vendo com o ponteiro "j", eu incrementava 1 no meu ponteiro "j" e na minha resposta. Todo laço eu conferia se minha resposta estava igual ao tamanho do meu vetor S2 (ou seja, se eu achei todos os elementos de S2 em S1 na ordem de S2, uma subsequência). Caso essa resposta estivesse igual ao tamanho de S2, eu setava a minha variável booleana de resposta final "deu" como True e dava um break no meu loop While.

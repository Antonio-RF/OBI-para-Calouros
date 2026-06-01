# Raciocínio da questão:

O exercício pede a "nota corte" de um concurso, dado um vetor das notas(v) de tamanho (n) e a quantidade de aprovados nesse concurso (K).

O meu raciocínio foi usar a função "sort()", porém com a pequena modificação de ordenar ao contrário, então ao invés de fazer sort(v.begin(), v.end()) eu fiz: sort(v.rbegin(), v.rend()). Repare que: quando fazemos rbegin e rend nós estamos falando do contrário dos iteradores. Eu ordenei o vetor em ordem decrescente pelo fato da prioridade da maior nota, basta pensar que os primeiros aprovados no concurso óbviamente serão os candidatos com a maior nota.

Então, a partir do meu vetor ordenado, eu printei a posição K-1 dele, pois como teremos K aprovados, o último aprovado (nota corte) será o elemento da posição K-1, considerando PRINCIPALMENTE que o meu vetor é 0-based, isso é, o primeiro elemento está na posição 0, o segundo elemento na posição 1, e assim por diante, por isso o K-1.

# Raciocínio da questão:

O problema nos pergunta quantos alunos o professor não consegue ver, ou seja, quantos alunos com altura menor dos que estão a sua frente tem nessa fila.

O raciocínio que usei para resolver essa questão foi: dar um reverse (trocar a ordem do vetor) apenas para não fazer um for que vá de n-1 a 0 e ter que ficar tratando de índices ao contrário. Depois, criei uma variável para armazenar o aluno com a maior altura vista até agora chamada "maior" que começa com o primeiro aluno. Com isso, vou percorrendo o vetor e vejo se o elemento atual é menor que o maior já visto até agora, ou seja, se tiver alguém maior que ele na frente, ele não será enxergado pelo professor. Além disso, eu atualizo o maior com a função "max(x, y)" todo laço comparando o valor atual do maior com o valor do vetor que estou vendo no momento.

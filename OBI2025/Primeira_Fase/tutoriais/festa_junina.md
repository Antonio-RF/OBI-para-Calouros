# Resolução da questão:

A questão pede a distância percorrida por Luiza da escola até os 2 estabelecimentos (supermercado e loja) e volta para a escola.

Podemos pensar que a distância na matemática pode ser expressa pelo módulo, pois não importa se a o local X está antes ou depois do local Y na nossa rua, a distância de X para Y será sempre |X-Y|.

Com isso, o raciocínio para se resolver essa questão é usar a função ***abs()***, que consiste no valor absoluto (módulo) em C++. Você primeiramente calcula a distância da escola até um dos 2 pontos (loja ou supermercado), depois calcula a distância desse ponto escolhido até o ponto não escolhido (no meu caso, fui primeiramente até o supermercado e daí fui do supermercado a loja) e, por fim, você calcula a distância desse ponto até a escola de volta (no meu caso, da loja até a escola).

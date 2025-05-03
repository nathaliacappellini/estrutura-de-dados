# Busca Binária - Breve explicação

A **pesquisa** ou **busca binária** é um algoritmo de busca em vetores que segue o paradigma de divisão e conquista. Ela parte do pressuposto de que o vetor está ordenado e realiza sucessivas divisões do espaço de busca comparando o elemento buscado (chave) com o elemento no meio do vetor. Se o elemento do meio do vetor for a chave, a busca termina com sucesso. Caso contrário, se o elemento do meio vier antes do elemento buscado, então a busca continua na metade posterior do vetor. E finalmente, se o elemento do meio vier depois da chave, a busca continua na metade anterior do vetor.

Resumindo:

1. A lista deve estar previamente ordenada (crescente ou decrescente).

2. Funcionamento:

    - Compara o elemento chave com o valor do meio da lista.

    - Se for igual, retorna a posição.

    - Se o alvo for menor, repete a busca na metade inferior.

    - Se o alvo for maior, repete a busca na metade superior.

    - Se a lista for reduzida a zero, o elemento não existe.

## Funcionamento

Busca Binária vs. Busca Linear:

![gif](busca-binaria-animation.gif)

No Gif podemos ver ambos tipos de busca procurando pelo número 37.

## Vantagens e Desvantagens

| Vantagens                                         | Desvantagens                                         |
|--------------------------------------------------|------------------------------------------------------|
| ✔ Extremamente eficiente: O(log n).              | ✖ Requer uma lista ordenada.                         |
| ✔ Ideal para listas grandes.                     | ✖ Não funciona bem com inserções/deleções frequentes.|
| ✔ Baixo uso de memória (in-place).               | ✖ Overhead para manter a lista ordenada.             |

## Desempenho

- **Melhor Caso:** O(1) (quando o número chave é o elemento no meio).

![gif](busca-binaria-melhor-caso.gif)

- **Pior Caso:** O(log n) (quando o número chave é o primeiro número da lista).

![gif](busca-binaria-pior-caso.gif)

- **Caso Médio:** O(log n).

## Quando Usar?

- Listas estáticas (que não mudam frequentemente).

- Buscas repetidas em datasets grandes (ex: bancos de dados indexados).

## Referências

[Busca Binária - Wikipédia](https://pt.wikipedia.org/wiki/Pesquisa_bin%C3%A1ria)

[Spartans Fall-14](https://fall14cs.wordpress.com/lecture-details-dsa/)
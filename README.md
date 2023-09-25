# NomedoProjeto

**Número da Lista**: X<br>
**Conteúdo da Disciplina**: Grafos 1<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 21/1030729  |  Eric Rabelo Borges |
| 19/0058455  |  Mariana Oliveira Pires do Rio |

## Sobre 
Este projeto contém as resoluções de exercícios de Juiz Online que envolvem algoritmos de busca em largura (BFS) e busca em profundidade (DFS). 

### Exercício 1:  [Cat Snuke and a Voyage](https://atcoder.jp/contests/abc068/tasks/arc079_a)

O exercício consiste em determinar se Cat Snuke, que está na Island 1, pode chegar à Island N em Takahashi Kingdom usando no máximo dois serviços de barco. A solução emprega um algoritmo de busca em largura (BFS) para explorar as conexões entre as ilhas por meio dos serviços de barco. Ao iniciar a busca a partir da Island 1, o algoritmo rastreia a distância percorrida e, se encontrar a Island N em dois movimentos ou menos, a resposta é "POSSIBLE". Caso contrário, a resposta é "IMPOSSIBLE". Isso permite a Cat Snuke determinar se ele pode alcançar seu destino com as restrições de uso de serviços de barco.

- [Ir para solução](Soluções/CatSnukeandaVoyage.cpp)

### Exercício 2:  [Peaks](https://atcoder.jp/contests/abc166/tasks/abc166_c)

O exercício consiste em descobrir quantos bons observatórios existem em AtCoder Hill, para descobrir essa quantidade deve-se verificar se a altitude do observatório é superior aos demais observatório que podem ser alcançados a partir de Obs.i ultilizando apenas uma estrada.
Para a solução temos um grafo em lista de adjacencia que guarda as ligacoes entre elas, apartir disso fazemos busca em largura (BFS) para encontramos os observatório desejados e paramos quando verificamos que a altura do observatório é menor do que os envolta.

- [Ir para solução](Soluções/Peaks.cpp)

### Exercício 3:  [Count Simple Paths](https://atcoder.jp/contests/abc284/tasks/abc284_e)

Neste exercício, você recebe um grafo não direcionado com N vértices e M arestas, e o objetivo é determinar o número de caminhos simples que partem do vértice 1, com a restrição de que o grau de cada vértice não ultrapassa 10. A solução utiliza busca em profundidade (DFS) para explorar o grafo, mantendo um contador de caminhos e limitando a contagem a 10^6 para otimização, resultando no menor valor entre o número de caminhos encontrados e 10^6 como saída.

- [Ir para solução](Soluções/CountSimplePaths.cpp)

## Screenshots

## Instalação 
**Linguagem**: C++<br>

## Uso 
Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros 
Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.





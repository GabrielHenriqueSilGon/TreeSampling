# TreeSampling
 
 Nesse exercício, várias estruturas de Tree são testadas e comparadas. Cada arquivo possui uma estrutura diferente, Árvore Binária, AVL, Red/Black além de uma estrutura de Vetor ordenado e uma que utiliza Unordered Map. Ao executar algum dos programas, este pede o input do tamanho de dados com o qual o úsuario deseja trabalhar, depois monta a árvore ou estrutura na memória utilizando valores aleatórios do tipo ponto flutuante como dados. O tempo de construção é cronometrado e mostrado ao usuário durante a execução do programa, no caso do vetor o tempo de ordenação do método quick sort também é medido durante a criação da estrutura.   

A seguir está a tabela com os tempos de execução para construir cada uma das estruturas: 

![image](https://user-images.githubusercontent.com/84454532/197074991-fa3ea3af-ffdd-4319-ab24-c0a32080ccf9.png)

Note que os valores na tabela são médias aritméticas de diversos testes. 

Após a árvore ou estrutura ser formada, outros 10.000 valores aleatórios são utilizados como entrada para pesquisa. Se um dos valores de entrada for encontrado na estrutura, este é mostrado ao usuário e então deletado da estrutura. Após todos os elementos na entrada de pesquisa forem comparados aos da estrutura, com os encontrados sendo imprimidos e retirados, o tempo de pesquisa cronometrado é mostrado ao usuário e o programa acaba. Por 

A seguir está a tabela com os tempos de execução para pesquisa em cada uma das estruturas: 

![image](https://user-images.githubusercontent.com/84454532/197077363-f7f9891f-6293-4f82-a114-200df87ab033.png)

Note que os valores na tabela são médias aritméticas de diversos testes. 

## Conclusão

Analisando os gráficos de tempo, fica evidente que, dentre as estruturas em árvore, a binária forma a estrutura mais cedo, mas demora na pesquisa. Já a AVL é o oposto, tendo o menos tempo de pesquisa, mas demorando um pouco mais do que a binária para a criação da estrutura, num todo demorando um tempo total menor que a binária para poucos dados e bem maior para muitos, dado a alta quantidade de inserções relativas à pesquisa. Já a Red/Black tem um tempo médio em ambos os campos, e é também a com menor tempo de execução total para menos dados, e quase alcançando a Binária na maior quantidade de entradas. 
 
Já o vetor ordenado tem um tempo de construção quase igual ao da árvore binária, porem seu tempo de pesquisa é absurdamente maior que todas as outras estruturas, exponencialmente maior para uma entrada de dados massiva. Já o unordered map é a estrutura que teve maior variância de tempo nos testes, as vezes indo mais rápido que todas as árvores em ambos os campos, as vezes ficando levando perto do dobro do tempo de um teste anterior. Entretanto, este possui os maiores custos para a criação da estrutura (com exceção da entrada de 500.000 dados, ganhando de todas as árvores nessa ocasião), mas ganha de todas as árvores para a pesquisa em um alto número de dados, e chegando perto quando a entrada é menor. 
 
Em conclusão, a Binária tem uma inserção rápida, por não ter muitas regras de estrutura, mas perde tempo para pesquisa por ser menos organizada. AVL demora um pouco para inserir novos dados por suas regras de balanceamento, mas uma vez balanceada torna a pesquisa mais eficiente. A Red/Black demora menos para as inserções por suas regras de balanceamento mais relaxadas, mas como continua sendo balanceada é muito eficiente para pesquisa. O vetor ordenado é a solução mais simples para guardar dados, mas ao mesmo tempo demora exponencialmente mais para pesquisas em uma grande quantidade de dados. E por fim, o unordered map lida melhor com grandes quantidades de inserções e pesquisa. 

# Makefile

Como executar:

  make clean - Apaga a última compilação realizada contida na pasta build
  
  make - Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build
  
  make run - Executa o programa da pasta build após a realização da compilação
  
  e se tudo falhar...

# Links para o código no GBD online

Binária - https://onlinegdb.com/C3Gx2Y0X9

AVL - https://onlinegdb.com/ZuFHWF-Fm

Red/Black - https://onlinegdb.com/ZuFHWF-Fm

Vetor Ordenado - https://onlinegdb.com/WmpWcy2My

Unordered Map - https://onlinegdb.com/08suhlrMB

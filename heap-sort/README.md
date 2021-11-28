# Heap sort
O heap sort é um algoritmos de ordenação similar ao de seleção. Simulando uma
arvore binárias, envia sempre o maior número para raíz e em seguida troca de lugar
com a última posição do vetor. O processo se repete `n` vezes (tamanho do array).

## Exemplo
Heapfy
![heapfy](../assets/heapfy.png)

HeapSort todos os nós de trás pra frente utilizando o Heapfy.
![heap Sort 01](../assets/heap-sort-01.png)

Executando o Heapsort `size - 1` vezes, substituindo o primeiro com o último
elemento e chamando o heapify novamente para trazer até a raíz o maior elemento.
![heap Sort 02](../assets/heap-sort-02.png)
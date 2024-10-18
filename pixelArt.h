#ifndef PIXELART_H_INCLUDED
#define PIXELART_H_INCLUDED

//typedef struct node Node;

int printMainMenu();
int printDesignMenu();
void designs();
void mario();
void printColorTest();
void luigi();
void toad();
int chooseSize();
void editor();
void printWelcome();
void colorsAvailable();
void setColor();
void pokeball();

typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado);
void libera_Grafo(Grafo* gr);
int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso);
int removeAresta(Grafo* gr, int orig, int dest, int eh_digrafo);
void buscaProfundidade_Grafo(Grafo *gr, int ini, int *visitado, int chave);
void buscaLargura_Grafo(Grafo *gr, int ini, int *visitado, int chave);
void menorCaminho_Grafo(Grafo *gr, int ini, int *antecessor, float *distancia, int chave);
void imprime_Grafo(Grafo *gr);
void algKruskal (Grafo *gr, int orig, int *pai);
void printaKruskal(int tamanho, int *pai);
void imprimeArestas(int vertice);
void imprime_Designs(Grafo *gr);
void imprimeDesign(int vertice);

#define M 3 //M refere-se à ordem da árvore, ou seja, quantos filhos cada nó pode ter


#endif // PIXELART_H_INCLUDED

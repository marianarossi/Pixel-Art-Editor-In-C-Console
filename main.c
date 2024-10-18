#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"
#include "pixelArt.h"
#include <conio.h>


int main()
{

    int eh_digrafo = 0;
//    printf("Criado grafo digrafo com 5 vertices, grau maximo 5, nao ponderado.\n");
    Grafo* gr = cria_Grafo(4, 4, 0);
//    printf("Inclusao de arestas entre vertices 0, 1, 2, 3 e 4:\n");
    insereAresta(gr, 0, 1, eh_digrafo, 0); //luigi mario
    insereAresta(gr, 2, 0, eh_digrafo, 0); //toad luigi
    insereAresta(gr, 2, 1, eh_digrafo, 0); //toad mario
    insereAresta(gr, 3, 1, eh_digrafo, 0); //pokemon mario
    printWelcome();

    int option=0;
    do
    {
        option = printMainMenu();
        switch(option)
        {
        case 1:
            editor();
            break;
        case 2:
            printColorTest();
            break;
        case 3:
            designs();
            break;
        case 4:
            imprime_Grafo(gr);
            break;
        case 5:
            imprime_Designs(gr);
            break;
        }
    }while(option != 6);

    return 0;
}

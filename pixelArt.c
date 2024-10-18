#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "COLORS.h"
#include "pixelArt.h"

void printWelcome()
{
    printf("Welcome to the C language Pixel Art Editor!\n");
    printf("In this application you can use your creativity to create your own pixel art design\n");
    printf("Besides that, you can even change the color, usign the "BRED "ASCII " BBLU "Color " BGRN "Table!!\n" reset);
    printf("In this project, we allow you to create your pixel art, with sizes going up to 16x16 pixels.\n");
    printf("You can also choose to print our already designed arts, which can serve as inspiration.\n");
    printf("Besides utilizing the "BRED "ASCII " BBLU "Color " BGRN "Table, " reset "we also use a Graph to store the design data.\n");
    printf("The Graph structure demonstrates the relation between the character designs\n");
    printf(BMAG "Isn't that cool??\n\n" reset);
    printf("Now that you understand how our game works, let's play!\n\n");
}

int printMainMenu()
{
    int option;
    printf("1 - Pixel Art Editor\n");
    printf("2 - Print Color Test\n");
    printf("3 - Designs for inspiration\n");
    printf("4 - Print the Graph Names\n");
    printf("5 - Print the Graph Designs\n");
    printf("6 - Leave\n");
    printf("Type an option to play: ");
    scanf("%d", &option);
    return option;
}

void designs()
{
    int option=0;
    do
    {
        option = printDesignMenu();
        switch(option)
        {
        case 1:
            mario();
            break;
        case 2:
            luigi();
            break;
        case 3:
            toad();
            break;
        case 4:
            pokeball();
            break;
        }
    }while(option != 5);
}

int printDesignMenu()
{
    int option=0;
    printf("Select an characther to print.\n");
    printf("1 - Mario\n");
    printf("2 - Luigi\n");
    printf("3 - Toad\n");
    printf("4 - Pokeball\n");
    printf("5 - Leave\n");
    printf("Select an option: ");
    scanf("%d", &option);
    return option;
}

int chooseSize()
{
    int option=0;
  do
  {
      printf("Choose a size for your design:\n");
      printf("1- [4x4]      2 - [8x8]      3 - [16x16]\n");
      printf("Type: ");
      scanf("%d", &option);
      if(option != 1 && option != 2 && option != 3)
      {
          printf("Not available.\n");
      }
  }while(option != 1 && option != 2 && option != 3);
    return option;

}

void printLine(int cols, char colorCodes[cols][20], char matrix[cols]) {
    for (int j = 0; j < cols; j++) {
        printf("%s%c" reset, colorCodes[j], matrix[j]);
    }
    printf("\n");
}
void editor()
{
    int rows, cols, i, j;
    int size = chooseSize();

    // Set columns to be twice the rows
    if (size == 1) {
        rows = 4;
        cols = 8;
    } else if (size == 2) {
        rows = 8;
        cols = 16;
    } else {
        rows = 16;
        cols = 32;
    }

    char matrix[rows][cols];
    char colorCodes[rows][cols][20]; // To store color codes for each pixel

    for(int i=0; i < rows; i++)
    {

        for(int j=0; j<cols; j++)
        {
            matrix[i][j] = 177;
        }
    }

    colorsAvailable();

    for (i = 0; i < rows; i++) {
        printf("Enter colors for row %d:\n", i + 1);
        for (j = 0; j < cols; j += 2) { // Increment by 2

            int colorOption;
            char colorCode[20];

            printf("Enter color for pixels (%d, %d) and (%d, %d) [1-8]: ", i, j, i, j+1);
            scanf("%d", &colorOption); //pega numero da cor
            setColor(colorOption, colorCode); //passa esse numero e um vetor de cores

            strcpy(colorCodes[i][j], colorCode); // Store color code for each pixel
            strcpy(colorCodes[i][j+1], colorCode); // Apply the same color to the next column
        }
        // Print the current line after completion
        printLine(cols, colorCodes[i], matrix[i]);
    }

    // Print the entire design at the end
    printf("\nFinal design:\n");
    for (i = 0; i < rows; i++) {
        printLine(cols, colorCodes[i], matrix[i]);
    }
}



void colorsAvailable()
{
    printf("Available colors:\n");
    printf("1 - Black\n");
    printf("2 - Red\n");
    printf("3 - Green\n");
    printf("4 - Yellow\n");
    printf("5 - White\n");
    printf("6 - Blue\n");
    printf("7 - Cyan\n");
    printf("8 - Magenta\n");
}

void setColor(int colorOption, char *colorCode) {
    switch (colorOption) {
        case 1: strcpy(colorCode, BLK); break;
        case 2: strcpy(colorCode, REDB BRED); break;
        case 3: strcpy(colorCode, HBLU GRNB); break;
        case 4: strcpy(colorCode, BHYEL YELB); break;
        case 5: strcpy(colorCode, WHTB BWHT); break;
        case 6: strcpy(colorCode, BLU); break;
        case 7: strcpy(colorCode, BCYN BLUHB); break;
        case 8: strcpy(colorCode, YEL REDHB); break;
        default: strcpy(colorCode, reset); break;
    }
}


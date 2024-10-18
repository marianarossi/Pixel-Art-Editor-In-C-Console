#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"

#define ROWS 8
#define COLS 16
#define MAX_COLOR_LENGTH 8  // Maximum length of color code

void luigi()
{
    char matriz[8][16];
    int i,j;


    for(int i=0; i < 8; i++)
    {

        for(int j=0; j<16; j++)
        {
            matriz[i][j] = 177;
        }
    }

    for(i=0; i < 8; i++)
    {

        for(j=0; j<16; j++)
        {
            switch (i)
            {
            case 0: //linha 0
            {
                if((j >= 0 && j <= 5) || j == 14 || j == 15)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j >= 6 && j <= 11)
                {
                    printf(HBLU GRNB "%c" reset, matriz[i][j]); // Green pixels
                }
                else if(j == 12 || j == 13)
                {
                    printf(WHTB BWHT "%c" reset, matriz[i][j]); // White pixels
                }
                break;
            }
            case 1: //linha 1
            {
                if(j >= 0 && j <= 5)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else
                {
                    printf(HBLU GRNB "%c" reset, matriz[i][j]); // Green pixels
                }
                break;
            }
            case 2: //linha 0
            {
                if((j >= 0 && j <= 3) || j == 14 || j == 15)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j >= 4 && j <= 9)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); // Brown pixels (Mario's brown)
                }
                else
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]); // Face color (Yellow)
                }
                break;
            }
            case 3:
            {
                if((j >= 0 && j <= 3) || j == 14 || j == 15 || j ==10||j==11)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j >= 4 && j <= 5 || j== 8||j==9)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); // Brown pixels (Mario's brown)
                }
                else
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]); // Face color (Yellow)
                }
                break;
            }
            case 4:
            {
                if((j >= 0 && j <= 5))
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j >= 10 && j <= 13)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); // Brown pixels (Mario's brown)
                }
                else
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]); // Face color (Yellow)
                }
                break;
            }
            case 5:
            {
                if(j==0 || j== 1 || j==14||j==15)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j >= 8 && j <= 13)
                {
                printf(BYEL YELHB "%c" reset, matriz[i][j]); // Face color (Yellow)
                }
                else if(j==6||j==7)
                {
                printf(BHYEL YELB  "%c" reset, matriz[i][j]); //barba

                }
                else
                {
                    printf(HBLU GRNB "%c" reset, matriz[i][j]); // Green pixels
                }
                break;
            }
            case 6:
            {
                if(j==2 || j== 3)
                {
                    printf(BLK "%c" reset, matriz[i][j]); // Black pixels
                }
                else if(j==12 || j== 13)
                {
                    printf(BHBLU BLKB  "%c" reset, matriz[i][j]); //barba
                }
                else if(j==14 || j==15)
                {
                    printf(BLK BLKHB  "%c" reset, matriz[i][j]); //cinza
                }else if(j==0||j==1)
                {
                    printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }
                else
                {
                    printf(BCYN BLUHB  "%c" reset, matriz[i][j]); //barba
                }
                break;
            }
            case 7:
            {
                if(j==4 || j==5)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }else if(j == 12 || j == 13)
                {
                    printf(BHMAG BLKB  "%c" reset, matriz[i][j]); //barba
                }else
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }
            break;
            }

            }
        }
        printf("\n");
    }
}

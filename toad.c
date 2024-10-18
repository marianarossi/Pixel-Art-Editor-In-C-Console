#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"


void toad()
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

    for(i = 0; i < 8; i++)
    {
        for(j=0; j<16; j++)
        {
            switch(i)
            {
            case 0:
            {
                if(j>=2 && j<=5)
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }else if(j>=6 && j<=11)
                {
                        printf(REDB BRED "%c" reset, matriz[i][j]);
                }else
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }
            break;
            }
            case 1:
            {
                if(j==14 || j==15)
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }else if(j>=6 && j<=9)
                {
                        printf(REDB BRED "%c" reset, matriz[i][j]);
                }
                else
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }
                break;
            }
            case 2:
            {
                if(j>=4 && j<=11)
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }else if(j==14||j==15)
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }
                else
                {
                        printf(REDB BRED "%c" reset, matriz[i][j]);
                }

                break;
            }
            case 3:
            {
                if(j>=6 && j<=11)
                {
                    printf(YEL REDHB "%c" reset, matriz[i][j]); //pele toad
                }else if(j==14||j==15)
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }else if(j==4||j==5)
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }
                else
                {
                        printf(REDB BRED "%c" reset, matriz[i][j]);
                }

                break;
            }
            case 4:
            {
                if(j==6|| j==7 || j==10 || j==11)
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }else if(j==12 || j==13)
                {
                    printf(BLK BLKHB  "%c" reset, matriz[i][j]); //cinza
                }else if(j==8||j==9)
                {
                    printf(YEL REDHB "%c" reset, matriz[i][j]); //pele toad
                }else
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }
                break;
            }
            case 5:
                if(j>=4 && j<=11)
                {
                    printf(YEL REDHB "%c" reset, matriz[i][j]); //pele toad
                }else
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }
            {
                break;
            }
            case 6:
            {
                if(j==0 || j==1)
                {
                    printf(YEL REDHB "%c" reset, matriz[i][j]); //pele toad
                }else if(j==10 || j==11)
                {
                    printf(BLU "%c" reset, matriz[i][j]);
                }else if(j==12 || j==13)
                {
                        printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }else if(j==6||j==7||j== 8|j== 9)
                {
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }else if(j==14||j==15)
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }
                else
                {
                    printf(BLU "%c" reset, matriz[i][j]);
                }
                break;
            }
            case 7:
            {
                if(j==2 || j==3 || j==4 || j==5||j==8 || j==9 || j==10 || j==11)
                {
                        printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }else
                {
                        printf(BLK "%c" reset, matriz[i][j]); //preto
                }
                break;
            }

        }

        }
        printf("\n");
    }
}

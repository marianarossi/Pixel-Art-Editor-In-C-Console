#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"


void mario()
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
                if((j >= 0 && j <= 5) || j == 14 || j ==15) //pixel 0,1,2,3,4,5,14,15
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }
                if(j>=6 && j<=11) //pixel 6,7,8,9,10,11
                {
                    printf(REDB BRED "%c" reset, matriz[i][j]);
                }
                if(j == 12 || j == 13)
                {
                    printf(WHTB BWHT "%c" reset, matriz[i][j]);

                }
            }
            break;
            case 1:
            {
                if(j >= 0 && j <= 5) //pixel 0,1,2,3,4,5
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }else
                {
                    printf(REDB BRED "%c" reset, matriz[i][j]);
                }
            }
            break;
            case 2:
            {
                if((j >= 0 && j <= 3) || (j>=10 && j<=11) || j==14 || j ==15) //pixel 0,1,2,3
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }
                if(j == 4 || j == 5 || j == 8 || j ==9)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }
                if(j==6 || j==7 || j==12 || j==13)
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]);
                }
            }
            break;
            case 3:
            {
                if(j >= 0 && j <= 3) //pixel 0,1,2,3
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }
                if(j == 4 || j == 5 || j == 10 || j ==11|| j==12 || j==13)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }
                if((j>=6 && j<=9) || j== 14 || j==15)
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]); //cor da pele
                }
            }
            break;
            case 4:
            {
                if((j >= 0 && j <= 5) || j==14 || j==15) //pixel 0,1,2,3,4,5
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }else if(j == 6 || j == 7)
                {
                    printf(GRN REDB "%c" reset, matriz[i][j]); //barba
                }else
                {
                    printf(BYEL YELHB "%c" reset, matriz[i][j]); //cor da pele
                }

            }
            break;
            case 5:
            {
                if((j >= 0 && j <= 1) || j==14 || j==15) //pixel 0,1,2,3,4,5
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                } else if( j>=2 && j<=5)
                {
                    printf(REDB BRED "%c" reset, matriz[i][j]);
                }else if(j == 6 || j == 7)
                {
                    printf(BHYEL YELB  "%c" reset, matriz[i][j]); //barba
                }else if(j == 12 || j == 13)
                {
                    printf(BHMAG YELB  "%c" reset, matriz[i][j]); //barba

                }else
                {
                    printf(BCYN BLUHB  "%c" reset, matriz[i][j]); //barba
                }
            }
            break;
            case 6:
            {
                if(j==0 || j==1)
                {
                    printf(WHTB BWHT "%c" reset, matriz[i][j]);
                }else if(j==2 || j==3)
                {
                    printf(BLK "%c" reset, matriz[i][j]);
                }else if(j==12 || j== 13)
                {
                    printf(BHBLU BLKB  "%c" reset, matriz[i][j]); //barba
                }else if(j==14 || j==15)
                {
                    printf(BLK BLKHB  "%c" reset, matriz[i][j]); //cinza
                }else
                {
                    printf(BCYN BLUHB  "%c" reset, matriz[i][j]); //barba
                }


            }
            break;
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

            }
            break;
            }
        }
        printf("\n");
    }
}

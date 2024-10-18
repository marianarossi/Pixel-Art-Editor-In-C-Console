#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"


void pokeball()
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
			if(j==0 || j==1 || j==14 || j==15)
			{
				printf(BLK "%c" reset, matriz[i][j]);
			}else
			{
                        printf(REDB BRED "%c" reset, matriz[i][j]);
			}
		break;
		}
		case 1:
		{
			if(j>=2 && j<=5)
			{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			}else
			{
                        printf(REDB BRED "%c" reset, matriz[i][j]);
			}
			break;
		}
		case 2:
		{
			if(j==2||j==3)
			{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			}else
			{
                        printf(REDB BRED "%c" reset, matriz[i][j]);
			}

			break;
		}
		case 3:
		{
			if(j>=6 && j<=11)
			{
				printf(BLK "%c" reset, matriz[i][j]);
			}else
			{
                        printf(REDB BRED "%c" reset, matriz[i][j]);
			}

			break;
		}
		case 4:
		{
			if(j==8|| j==9)
			{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			}else
			{
				printf(BLK "%c" reset, matriz[i][j]);
			}
			break;
		}
		case 5:
			if(j>=6 && j<=11)
			{
				printf(BLK "%c" reset, matriz[i][j]);
			}else
			{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			}
		{
			break;
		}
		case 6:
		{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			break;
		}
		case 7:
		{
			if(j==0 || j==1 || j==14 || j==15)
			{
				printf(BLK "%c" reset, matriz[i][j]);
			}else
			{
                        printf(WHTB BWHT "%c" reset, matriz[i][j]);
			}
			break;
		}

	}

}
printf("\n");
}
}

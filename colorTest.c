#include <stdio.h>
#include <stdlib.h>
#include "COLORS.h"

void printColorTest()
{
    // Arrays com os códigos de cores de texto e fundo (sem underline)
    char *text_colors[] = {BLK, RED, GRN, YEL, BLU, MAG, CYN, WHT,
                           BBLK, BRED, BGRN, BYEL, BBLU, BMAG, BCYN, BWHT,
                           HBLK, HRED, HGRN, HYEL, HBLU, HMAG, HCYN, HWHT,
                           BHBLK, BHRED, BHGRN, BHYEL, BHBLU, BHMAG, BHCYN, BHWHT};

    char *background_colors[] = {BLKB, REDB, GRNB, YELB, BLUB, MAGB, CYNB, WHTB,
                                 BLKHB, REDHB, GRNHB, YELHB, BLUHB, MAGHB, CYNHB, WHTHB};

    char *text_color_names[] = {"BLK", "RED", "GRN", "YEL", "BLU", "MAG", "CYN", "WHT",
                                "BBLK", "BRED", "BGRN", "BYEL", "BBLU", "BMAG", "BCYN", "BWHT",
                                "HBLK", "HRED", "HGRN", "HYEL", "HBLU", "HMAG", "HCYN", "HWHT",
                                "BHBLK", "BHRED", "BHGRN", "BHYEL", "BHBLU", "BHMAG", "BHCYN", "BHWHT"};

    char *background_color_names[] = {"BLKB", "REDB", "GRNB", "YELB", "BLUB", "MAGB", "CYNB", "WHTB",
                                      "BLKHB", "REDHB", "GRNHB", "YELHB", "BLUHB", "MAGHB", "CYNHB", "WHTHB"};

    int num_text_colors = sizeof(text_colors) / sizeof(text_colors[0]);
    int num_background_colors = sizeof(background_colors) / sizeof(background_colors[0]);

    // Loop para cada combinação de cor de texto e fundo
    for(int i = 0; i < num_text_colors; i++) {
        for(int j = 0; j < num_background_colors; j++) {
            printf("(%s on %s)->", text_color_names[i], background_color_names[j]);
            printf("%s%s%c%s", text_colors[i], background_colors[j], 176, reset);
        }
        printf("\n");
    }


    // Loop para cada combinação de cor de texto e fundo
    for(int i = 0; i < num_text_colors; i++) {
        for(int j = 0; j < num_background_colors; j++) {
            printf("%s%s%c%s", text_colors[i], background_colors[j], 176, reset);
        }
        printf("\n");
    }
}

//{
//    // Arrays com os códigos de cores de texto e fundo
//    char *text_colors[] = {BLK, RED, GRN, YEL, BLU, MAG, CYN, WHT,
//                           BBLK, BRED, BGRN, BYEL, BBLU, BMAG, BCYN, BWHT,
//                           UBLK, URED, UGRN, UYEL, UBLU, UMAG, UCYN, UWHT,
//                           HBLK, HRED, HGRN, HYEL, HBLU, HMAG, HCYN, HWHT,
//                           BHBLK, BHRED, BHGRN, BHYEL, BHBLU, BHMAG, BHCYN, BHWHT};
//
//    char *background_colors[] = {BLKB, REDB, GRNB, YELB, BLUB, MAGB, CYNB, WHTB,
//                                 BLKHB, REDHB, GRNHB, YELHB, BLUHB, MAGHB, CYNHB, WHTHB};
//
//    int num_text_colors = sizeof(text_colors) / sizeof(text_colors[0]);
//    int num_background_colors = sizeof(background_colors) / sizeof(background_colors[0]);
//
//    // Loop para cada combinação de cor de texto e fundo
//    for(int i = 0; i < num_text_colors; i++) {
//        for(int j = 0; j < num_background_colors; j++) {
//            printf("%s%s%c%s", text_colors[i], background_colors[j], 177, reset);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}

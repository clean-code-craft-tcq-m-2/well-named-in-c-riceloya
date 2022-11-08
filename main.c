#include <stdio.h>
#include <assert.h>
#include "color_test.h"

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

void print_color_code(){
    char *title= "///////////////////25 COLOR CODE MANUAL///////////////////";
    char *k_iter= "Pair Number: "; 
    char *M_Color= "Major color: ";
    char *m_Color= "|| Minor color: ";
    char k =0;
    FILE *Manual = fopen("manual_c.txt", "w");
    fprintf(Manual,"%s\n", title);
    for (int i = WHITE; i < MAX_MAJOR; i++){
        for (int j = BLUE; j < MAX_MINOR; j++){
            fprintf(Manual,"%s %d %s %d %s %s  %d %s\n",k_iter, k, M_Color, i, MajorColorNames[i], m_Color,  j, MinorColorNames[j]);
            k++;
        }
    }
    fclose(Manual);
}
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    print_color_code();
    return 0;
}
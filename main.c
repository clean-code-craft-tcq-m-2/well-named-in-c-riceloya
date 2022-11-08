#include <stdio.h>
#include <assert.h>
#include "color_test.h"
void ColorPairToString(const ColorPair* colorPair, char* buffer) {sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor], MinorColorNames[colorPair->minorColor]);}
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair; int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}
int GetPairNumberFromColor(const ColorPair* colorPair) {return colorPair->majorColor * numberOfMinorColors +colorPair->minorColor + 1;}
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
void print_color_code(){
    char *buffer;char *title= "///////////////////25 COLOR CODE MANUAL///////////////////";
    char *k_iter= "Pair Number: "; char *M_Color= "Major color: "; char *m_Color= "|| Minor color: ";
    char k =0;const ColorPair ColorPair; FILE *Manual = fopen("manual_c.txt", "w");
    fprintf(Manual,"%s\n", title, buffer);
    for (int i = WHITE; i < MAX_MAJOR; i++){
        for (int j = BLUE; j < MAX_MINOR; j++){
            fprintf(Manual,"%s %d %s %d %s %s  %d %s\n",k_iter, k,M_Color, i, MajorColorNames[i],m_Color,  j, MinorColorNames[j], buffer);
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
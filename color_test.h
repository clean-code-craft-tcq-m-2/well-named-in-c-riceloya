#ifndef color_test
#define color_test
#include <stdio.h>
#include <assert.h>
#define MAX_COLORPAIR_NAME_CHARS  16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, MAX_MAJOR};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MAX_MINOR};


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);

#endif
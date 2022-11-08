#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, MAX_MAJOR};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MAX_MINOR};
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int MAX_COLORPAIR_NAME_CHARS = 16;
extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
 
/*extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
*/
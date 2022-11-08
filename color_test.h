#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, MAX_MAJOR};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MAX_MINOR};
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair
extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int MAX_COLORPAIR_NAME_CHARS = 16;
extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

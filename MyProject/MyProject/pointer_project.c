#include <stdio.h>

int level;
int arrayFish[6];
int* cursor;
void initData();

int main(void) {
    long startTime = 0;
    long totalElapsedTime = 0;
    long prevElapsedTime = 0;

    int num = 0;
    initData();

    cursor = arrayFish;

    return 0;
}

void initData() {
    level = 1
        ;
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100;
    }
}
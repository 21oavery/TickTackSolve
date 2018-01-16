#include "defs.h"

void findBest(Game g) {
    int moves[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int index = 0;
    while (1) {
        ++moves[index];

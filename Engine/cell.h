#ifndef CELL_H
#define CELL_H

#include "../main.h"

typedef struct posXY {
    int x;
    int y;
}position_t;

class Cell {
    private:
        bool live;
        position_t *pos;
    public:
        Cell(int, int);
        bool isAlive();
        void kill();
        void unKill();
        position_t *getPos();
};

#endif

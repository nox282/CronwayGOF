#include "cell.h"

Cell::Cell(int x, int y){
    live = false;
    pos = new position_t();
    pos->x = x;
    pos->y = y;
}

bool Cell::isAlive(){
    return live;
}

void Cell::kill(){
    live = false;
}

void Cell::unKill(){
    live = true;
}

position_t *Cell::getPos(){
    return pos;
}

#ifndef CHECK_H
#define CHECK_H

#include "../main.h"
#include "cell.h"

typedef struct dimension{
    int width;
    int height;
} dimension_t;

class Check{
    private:
        dimension_t *size;
        vector< vector<Cell> > check;
    public:
        Check(int, int);
        ~Check();
        dimension_t *getSize();
        Cell getCell(int, int);
};

#endif

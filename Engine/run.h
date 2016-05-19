#ifndef RUN_H
#define RUN_H

#include "../main.h"
#include "law.h"

class Engine{
    private:
        Check plate;
        bool checkLaws(Cell);
    public:
        Engine(int, int, int**);
        void getNextGen();
        void goToNGen(int);
        Check getPlate();
    
};

#endif

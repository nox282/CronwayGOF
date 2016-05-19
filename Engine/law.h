#ifndef LAW_H
#define LAW_H

#include "../main.h"
#include "check.h"

class Law {
    protected:
        virtual ~Law();
        static int getSurrouding(Cell, Check);
};

class UnderPopulation:public Law{
    public:
        static bool isAlive(Cell, Check);
};

class Survival:public Law{
    public:
        static bool isAlive(Cell, Check);
};

class OverPopulation:public Law{
    public:
        static bool isAlive(Cell, Check);
};

class Reproduction:public Law{
    public:
        static bool isAlive(Cell, Check);
};

#endif

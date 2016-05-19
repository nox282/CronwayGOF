#include "law.h"

int subZero(int);

int Law::getSurrouding(Cell cell, Check check){
    int ret = 0;
    int x = cell.getPos()->x;
    int y = cell.getPos()->y; 

    for(int i = subZero(y); i < y + 1; i++){
        for(int j = subZero(x); j < x + 1; j++){
            if(!(i == y && j == x)){
                Cell tmp = check.getCell(i, j);
                
                if(tmp.isAlive())
                    ret++;
            }
        } 
    }
    return ret;
}

int subZero(int a){
    if(a>0)
        return a-1;
    else
        return a;
}

bool UnderPopulation::isAlive(Cell cell, Check check){
    int aliveAround = getSurrouding(cell, check);
    if(aliveAround < 2)
        return false;
    return true;
}

bool Survival::isAlive(Cell cell, Check check){
    int aliveAround = getSurrouding(cell, check);
    if(aliveAround >= 2 && aliveAround <= 3)
        return true;
    return false;
}

bool OverPopulation::isAlive(Cell cell, Check check){
    int aliveAround = getSurrouding(cell, check);
    if(aliveAround > 3)
        return false;
    return true;
}

bool Reproduction::isAlive(Cell cell, Check check){
    int aliveAround = getSurrouding(cell, check);
    if(aliveAround == 3 && !cell.isAlive())
        return true;
    return false;
}

#include "run.h"

Engine::Engine(int w, int h, int **tab):
    plate(w, h){
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(tab[i][j] != 0) 
                plate.getCell(i, j).unKill();
        }
    }
}

void Engine::getNextGen(){
    dimension_t *size = plate.getSize();
    for(int i = 0; i < size->height; i++){
        for(int j = 0; j < size->width; j++){
            Cell cell = plate.getCell(i, j);
            if(checkLaws(cell))
                cell.unKill();
            else
                cell.kill();
        }
    }
}

Check Engine::getPlate(){
    return plate;
}

bool Engine::checkLaws(Cell cell){
    bool ret = UnderPopulation::isAlive(cell, plate);
    ret = Survival::isAlive(cell, plate);
    ret = OverPopulation::isAlive(cell, plate);
    ret = Reproduction::isAlive(cell, plate);
    return ret;
}

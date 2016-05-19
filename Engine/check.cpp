#include "check.h"

Check::Check(int w, int h){
    size = new dimension_t();
    size->height = h;
    size->width = w;
    Cell *cell;
    vector<Cell> tmp;
    
    for(int i = 0; i < h; i++){
        tmp.clear();
        for(int j = 0; j < w; j++){
            cell = new Cell(i, j);
            tmp.push_back(*cell);    
        }
        check.push_back(tmp); 
    }
}

Check::~Check(){
    for(long i = 0; i < (long)check.size(); i++)
        check[i].clear();
    check.clear();
}

dimension_t *Check::getSize(){
    return size;
}

Cell Check::getCell(int x, int y){
    return check[x][y];
}

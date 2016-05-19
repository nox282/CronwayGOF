#include "main.h"
#include "Engine/run.h"

int main(int argc, char **argv){
    int **tab = new int*[10];
    for(int i = 0; i < 10; i++)
        tab[i] = new int[10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tab[i][j] = 0;
        }
    }
    
    tab[0][5] = 1;
    tab[1][4] = 1;
    tab[1][6] = 1;
    tab[2][5] = 1;
    
    Engine engine(10, 10, tab);
    
    cout << engine.getPlate().getCell(1, 4).isAlive() << endl;

    return 0;
}

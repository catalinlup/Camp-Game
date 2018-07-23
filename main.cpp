#include "Game.h"

Game game("Some title",800,600);

int main(int argc,char*args[]){
    game.init();
    game.run();
    game.close();
    return 0;
}

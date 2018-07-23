#include "Game.h"

Game::Game(std::string title,double width, double height){
        _title=title;
        _width=width;
        _height=height;
        _quit=false;
}
void Game::init(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        std::cerr<<"SDL could not initialize"<<std::endl;
        return;
    }
    _window = SDL_CreateWindow(_title.c_str(),SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,_width,_height,SDL_WINDOW_SHOWN);
    if(_window==nullptr){
        std::cerr<<"Window handle could not initialize"<<std::endl;
        return;
    }
    _renderer = SDL_CreateRenderer(_window,-1,SDL_RENDERER_ACCELERATED);
}


void Game::run(){
    while(!_quit){
       while(SDL_PollEvent(&_ev)!=0){
            if(_ev.type==SDL_QUIT){
                _quit=true;
            }
       }
     compute();
     render();
  }
}

void Game::close(){
    SDL_Quit();
}

void Game::render(){
    SDL_RenderClear(_renderer);
    //add draw functions

    SDL_RenderPresent(_renderer);
}

void Game::compute(){

}

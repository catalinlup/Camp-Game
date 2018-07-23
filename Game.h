#include "SDL2/SDL.h"
#include <bits/stdc++.h>

class Game{
public:
    Game(std::string title,double width, double height);
    void init();
    void run();
    void close();

private:
    SDL_Window* _window=nullptr;
    SDL_Renderer* _renderer=nullptr;
    SDL_Event _ev;
    std::string _title;
    double _width = 0;
    double _height = 0;
    bool _quit=false;
    void render();
    void compute();
};

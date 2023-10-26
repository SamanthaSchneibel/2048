#include "game.hpp"

Game::Game()
{
}

Game::~Game()
{
}

void Game::display() {

    grid.display();

}

void Game::handleEvent() {

    bool badKey = true;
    while (badKey)
    {
        badKey = false;
        int c = 0;
        switch ((c = _getch()))
        {
        case KEY_UP:
            grid.moveUp();
            break;
        case KEY_DOWN:
            grid.moveDown();
            break;
        case KEY_RIGHT:
            grid.moveRight();
            break;
        case KEY_LEFT:
            grid.moveLeft();
            break;
        default:
            badKey = true;
            break;
        }
    }

}
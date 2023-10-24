#include "game.hpp"

Game::Game()
{
}

Game::~Game()
{
}

void Game::displayGrid() {

 	std::cout << "-------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "|";
		for (int j = 0; j < 4; j++) {
			switch (grid[i][j]) {
			case 0:
				std::cout << "  |";
				break;
			default:
				std::cout << grid[i][j] << " |";
				break;
			}
		}
		std::cout << std::endl << "-------------" << std::endl;
	}

}
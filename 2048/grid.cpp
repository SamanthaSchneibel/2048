#include "grid.hpp"

Grid::Grid()
{
}

Grid::~Grid()
{
}

void Grid::displayGrid() {

 	std::cout << "-------------------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "|";
		for (int j = 0; j < 4; j++) {
			if (grid[i][j] > 512)
				std::cout << grid[i][j] << " |";
			else if (grid[i][j] > 64)
				std::cout << grid[i][j] << "  |";
			else if (grid[i][j] > 8)
				std::cout << grid[i][j] << "   |";
			else if (grid[i][j] == 0)
				std::cout << "     |";
			else if (grid[i][j] < 16)
				std::cout << grid[i][j] << "    |";
		}
		std::cout << std::endl << "-------------------------" << std::endl;
	}

}
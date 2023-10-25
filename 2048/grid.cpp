#include "grid.hpp"

Grid::Grid()
{
    grid[1][3] = 2;

}

Grid::~Grid()
{
}

void Grid::display() {

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

void Grid::handleEvent() {

    bool badKey = true;
    while (badKey)
    {
        badKey = false;
        int c = 0;
        switch ((c = _getch()))
        {
        case KEY_UP:
            break;
        case KEY_DOWN:
            break;
        case KEY_RIGHT:
            break;
        case KEY_LEFT:
            break;
        default:
            badKey = true;
            break;
        }
    }

}

void Grid::moveRight() {

    for (int iColumn = 0; iColumn < 4; iColumn++)
    {
        for (int iEmptyCell = 3; iEmptyCell >= 0; iEmptyCell--)
        {
            if (grid[iColumn][iEmptyCell] != 0)
                continue;

            for (int iFullCell = iEmptyCell - 1; iFullCell >= 0; iFullCell--)
            {
                if (grid[iColumn][iFullCell] == 0)
                    continue;

                grid[iColumn][iEmptyCell] = grid[iColumn][iFullCell];
                grid[iColumn][iFullCell] = 0;
                break;
            }
        }
    }

}

void Grid::moveLeft() {

    for (int iColumn = 0; iColumn < 4; iColumn++)
    {
        for (int iEmptyCell = 0; iEmptyCell <= 3; iEmptyCell++)
        {
            if (grid[iColumn][iEmptyCell] != 0)
                continue;

            for (int iFullCell = iEmptyCell + 1; iFullCell <= 3; iFullCell++)
            {
                if (grid[iColumn][iFullCell] == 0)
                    continue;

                grid[iColumn][iEmptyCell] = grid[iColumn][iFullCell];
                grid[iColumn][iFullCell] = 0;
                break;
            }
        }
    }

}

void Grid::moveUp() {

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i <= 3; i++)
        {
            if (grid[j][i] != 0)
                continue;

            for (int k = i + 1; k <= 3; k++)
            {
                if (grid[j][k] == 0)
                    continue;

                grid[j][i] = grid[j][k];
                grid[j][k] = 0;
                break;
            }
        }
    }

}

void Grid::moveDown() {

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i <= 3; i++)
        {
            if (grid[j][i] != 0)
                continue;

            for (int k = i + 1; k <= 3; k++)
            {
                if (grid[j][k] == 0)
                    continue;

                grid[j][i] = grid[j][k];
                grid[j][k] = 0;
                break;
            }
        }
    }

}
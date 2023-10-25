#include "grid.hpp"

Grid::Grid()
{
    grid[3][0] = 2;

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

    for (int iColumn = 0; iColumn < 4; iColumn++) {
        for (int iEmptyCell = 3; iEmptyCell >= 0; iEmptyCell--) {
            if (grid[iColumn][iEmptyCell] != 0)
                continue;

            for (int iFullCell = iEmptyCell - 1; iFullCell >= 0; iFullCell--) {
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

    for (int iColumn = 0; iColumn < 4; iColumn++) {
        for (int iEmptyCell = 0; iEmptyCell <= 3; iEmptyCell++) {
            if (grid[iColumn][iEmptyCell] != 0)
                continue;

            for (int iFullCell = iEmptyCell + 1; iFullCell <= 3; iFullCell++) {
                if (grid[iColumn][iFullCell] == 0)
                    continue;

                grid[iColumn][iEmptyCell] = grid[iColumn][iFullCell];
                grid[iColumn][iFullCell] = 0;
                break;
            }
        }
    }

}

void Grid::moveDown() {

    for (int jRow = 0; jRow < 4; jRow++) {
        for (int jEmptyCell = 3; jEmptyCell >= 0; jEmptyCell--) {
            if (grid[jEmptyCell][jRow] != 0)
                continue;

            for (int jFullCell = jEmptyCell - 1; jFullCell >= 0; jFullCell--) {
                if (grid[jFullCell][jRow] == 0)
                    continue;

                grid[jEmptyCell][jRow] = grid[jFullCell][jRow];
                grid[jFullCell][jRow] = 0;
                break;
            }
        }
    }

}

void Grid::moveUp() {

    for (int jRow = 0; jRow < 4; jRow++) {
        for (int jEmptyCell = 0; jEmptyCell <= 3; jEmptyCell++) {
            if (grid[jEmptyCell][jRow] != 0)
                continue;

            for (int jFullCell = jEmptyCell + 1; jFullCell <= 3; jFullCell++) {
                if (grid[jFullCell][jRow] == 0)
                    continue;

                grid[jEmptyCell][jRow] = grid[jFullCell][jRow];
                grid[jFullCell][jRow] = 0;
                break;
            }
        }
    }

}
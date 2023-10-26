#include "grid.hpp"

Grid::Grid()
{
    grid[0][0] = 2;
    grid[1][0] = 2;
    grid[2][0] = 2;
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

void Grid::moveRight() {

    for (int iColumn = 0; iColumn < 4; iColumn++) {
        for (int iFullCell1 = 3; iFullCell1 >= 0; iFullCell1--) {
            if (grid[iColumn][iFullCell1] == 0) {
                continue;
            }

            for (int iFullCell2 = iFullCell1 - 1; iFullCell2 >= 0; iFullCell2--) {
                if (grid[iColumn][iFullCell2] == 0)
                    continue;

                if (grid[iColumn][iFullCell1] == grid[iColumn][iFullCell2]) {
                    grid[iColumn][iFullCell1] *= 2;
                    grid[iColumn][iFullCell2] = 0;
                }
            }
        }
    }

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
        for (int iFullCell1 = 0; iFullCell1 <= 3; iFullCell1++) {
            if (grid[iColumn][iFullCell1] == 0) {
                continue;
            }

            for (int iFullCell2 = iFullCell1 + 1; iFullCell2 <= 3; iFullCell2++) {
                if (grid[iColumn][iFullCell2] == 0)
                    continue;

                if (grid[iColumn][iFullCell1] == grid[iColumn][iFullCell2]) {
                    grid[iColumn][iFullCell1] *= 2;
                    grid[iColumn][iFullCell2] = 0;
                }
            }
        }
    }

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
        for (int jFullCell1 = 3; jFullCell1 >= 0; jFullCell1--) {
            if (grid[jFullCell1][jRow] == 0) {
                continue;
            }

            for (int jFullCell2 = jFullCell1 - 1; jFullCell2 >= 0; jFullCell2--) {
                if (grid[jFullCell2][jRow] == 0)
                    continue;

                if (grid[jFullCell1][jRow] == grid[jFullCell2][jRow]) {
                    grid[jFullCell1][jRow] *= 2;
                    grid[jFullCell2][jRow] = 0;
                }
            }
        }
    }

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
        for (int jFullCell1 = 0; jFullCell1 <= 3; jFullCell1++) {
            if (grid[jFullCell1][jRow] == 0) {
                continue;
            }

            for (int jFullCell2 = jFullCell1 + 1; jFullCell2 <= 3; jFullCell2++) {
                if (grid[jFullCell2][jRow] == 0)
                    continue;

                if (grid[jFullCell1][jRow] == grid[jFullCell2][jRow]) {
                    grid[jFullCell1][jRow] *= 2;
                    grid[jFullCell2][jRow] = 0;
                }
            }
        }
    }

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
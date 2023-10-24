#pragma once
#include <iostream>
#include <stdio.h>

class Game
{
public:
	Game();
	~Game();

	void displayGrid();

private:
	
	int grid[4][4] = { 0 };


};


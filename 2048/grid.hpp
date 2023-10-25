#pragma once
#include <iostream>
#include <stdio.h>

class Grid
{
public:
	Grid();
	~Grid();

	void displayGrid();

private:
	
	int grid[4][4] = { 0 };


};
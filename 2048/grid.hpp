 #pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


class Grid
{
public:
	Grid();
	Grid(int config[4][4]);
	~Grid();

	void display();

	void handleEvent();

	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	bool compare(int config[4][4]);

private:

	int grid[4][4] = { 0 };

};
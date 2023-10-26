#include "grid.hpp"

class Game 
{
public:
	Game ();
	~Game ();

	void display();

	void handleEvent();

	bool running() { return isRunning; };

private:

	Grid grid;
	bool isRunning = true;
	
};
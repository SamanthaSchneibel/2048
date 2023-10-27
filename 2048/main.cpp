#include "game.hpp"
#include "test.hpp"

int main() {

	/*
	Game game;
	game.display();

	while (game.running()) {
		game.handleEvent();
		game.display();
	}
	*/

	Test test;

	while (test.running()) {
		test.test1();
	}

	return 0;
}
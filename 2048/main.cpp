#include "game.hpp"

int main() {

	Game game;
	game.display();

	while (game.running()) {
		game.handleEvent();
		game.display();
	}

	return 0;
}
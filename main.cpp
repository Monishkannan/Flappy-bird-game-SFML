#include "Game.h"

int main()
{
	Game* game = new Game("Flappy bird");
	game->mainloop();

	delete game;
	game = nullptr;

	return 0;

	
}
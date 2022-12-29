#include <SFML/Graphics.hpp>
#include <chrono>
#include <thread>
#include <C:/Users/msi-pc/source/repos/project/Game.hpp>

int main() {

	mt::Game game;
	game.SetResolution(1200, 800);
	game.SetCaption("Game");
	game.Setup();

	game.Run();

	return 0;


}
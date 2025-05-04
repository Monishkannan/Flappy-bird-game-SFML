#pragma once
#include <SFML/Graphics.hpp>



class Game

{
public:
	Game(const char*);
	~Game();

	int score;
	void mainloop();

private:
	 
	sf::RenderWindow window;
	


	sf::Texture background_texture;

	sf::Sprite background;

	void handle_events(const sf::Event&);
	inline void draw_objects();
	inline void update_objects_positions();
	inline bool detect_loss();


};


inline	bool Game::detect_loss()
{

}

inline void Game::update_objects_positions()
{


}


inline void Game::draw_objects()
{

}
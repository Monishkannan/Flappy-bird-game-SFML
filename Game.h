#pragma once
#include <SFML/Graphics.hpp>
#include "Bird.h"
#include"Obstacle.h"



class Game

{
public:
	Game(const char*);

	~Game();

	int score;
	void mainloop();

private:
	 
	sf::RenderWindow window;
	Bird bird;
	Obstacle obstacle;


	sf::Texture background_texture;

	sf::Sprite background;

	void handle_events(const sf::Event&);
	inline void draw_objects();
	inline void update_objects_positions();
	inline bool detect_loss();
	sf::RectangleShape rect;

};


inline	bool Game::detect_loss()
{
	const auto& bird_bounds = bird.body.getGlobalBounds();

	if(bird_bounds.intersects()
		return true;



}

inline void Game::draw_objects()
{

}

inline void Game::update_objects_positions()
{


}



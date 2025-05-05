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

	void handle_events(const sf::Event& event);
	inline void draw_objects();
	inline void update_objects_positions();
	inline bool detect_loss();


};


inline	bool Game::detect_loss()
{
	const auto& bird_bounds = bird.body.getGlobalBounds();

	if (bird_bounds.findIntersection(obstacle.top_Obstacle.getGlobalBounds()))
		return true;
	if (bird_bounds.findIntersection(obstacle.bottom_Obstacle.getGlobalBounds()))
		return true;

	return false;

}

inline void Game::draw_objects()
{
	window.draw(background);
	window.draw(bird.body);
	window.draw(obstacle.top_Obstacle);
	window.draw(obstacle.bottom_Obstacle);


}

inline void Game::update_objects_positions()
{
	bird.update_bird();
	obstacle.update_Obstacle();
	if (obstacle.bottom_Obstacle.getPosition().x < -89)
		++score;
	obstacle.new_rand_Obstacle();

}



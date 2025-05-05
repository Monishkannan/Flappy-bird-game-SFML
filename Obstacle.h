#pragma once

#include<SFML/Graphics.hpp>

class Obstacle
{

public:
	sf::Texture texture;
	sf::Sprite bottom_Obstacle;
	sf::Sprite top_Obstacle;
	sf::Vector2f velocity;

	Obstacle();
	void update_Obstacle();
	void new_rand_Obstacle();

};
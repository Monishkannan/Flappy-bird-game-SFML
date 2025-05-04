#include "Bird.h"
#include<iostream>



namespace
{

	const sf::Vector2f fly_acc(0, -0.01f);
	const sf::Vector2f fall_acc(0, 0.01f);
	const float fly_rot{ -30.5f };
	const float fall_rot{ 0.01f };
	const sf::Vector2f middle(35, 29);
	const sf::Vector2f	initial_bird_pos(320, 300);
	const float max_fly_vel = -0.5;
	const float max_fall_vel = 0.4;

}
void Bird::fly();
{

}
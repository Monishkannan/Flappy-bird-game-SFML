#include"Obstacle.h"
#include<stdlib.h>
#include<iostream>




Obstacle::Obstacle():bottom_Obstacle(texture),top_Obstacle(texture)
{
	velocity = { -0.15f,0 };
	if (!texture.loadFromFile("Resource Files//pillar.png"))

		bottom_Obstacle.setTexture(texture);
		bottom_Obstacle.setPosition(sf::Vector2f(720, 300)); 

		top_Obstacle = bottom_Obstacle;
		top_Obstacle.setRotation(sf::degrees(180));

		const auto& bottom_position = bottom_Obstacle.getPosition();
		top_Obstacle.setPosition(sf::Vector2f(bottom_position.x + 89, bottom_position.y - 250));

		srand((unsigned) time(0));

}

void Obstacle::update_Obstacle()
{
	bottom_Obstacle.move(velocity);
	auto bottom_position = bottom_Obstacle.getPosition();

	top_Obstacle.setPosition(sf::Vector2f(bottom_position.x + 89, bottom_position.y - 250));


}

void Obstacle::new_rand_Obstacle()
{
	const auto new_pos = rand() % 600 + 200;
	bottom_Obstacle.setPosition(sf::Vector2f(800, new_pos));
	auto bottom_position = bottom_Obstacle.getPosition();
	top_Obstacle.setPosition(sf::Vector2f(bottom_position.x + 89, bottom_position.y - 250));



}

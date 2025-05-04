#include "Bird.h"
#include<iostream>
#include <SFML/Graphics.hpp>



namespace  
{

	const sf::Vector2f fly_acc(0, -0.01f);
	const sf::Vector2f fall_acc(0, 0.01f);
	const  sf::Angle  fly_rot=sf::degrees(- 30.5f );
	const sf::Angle fall_rot=sf::degrees( 0.01f );
	const sf::Vector2f middle(35, 29);
	const sf::Vector2f	initial_bird_pos(320, 300);
	const float max_fly_vel = -0.5;
	const float max_fall_vel = 0.4;

}


void Bird::fall()
{
	acceleration = ::fall_acc;
	body.rotate(::fall_rot);
	body.setTexture(texture_wing_down);



}

void Bird::fly()
{

	acceleration = ::fly_acc;
	start_fall = static_cast<int>(body.getPosition().y - 7);
	body.rotate(::fly_rot);
	body.setTexture(texture_wing_up);

}

void Bird::reset()
{
	acceleration = { 0,0 };
	velocity = { 0,0 };
	body.setPosition(sf::Vector2f(320, 300));
	body.rotate(sf::degrees(0));
	start_fall = 0;
		

}

void Bird::update_bird()
{
	velocity += acceleration;

	if (velocity.y >::max_fall_vel) velocity.y = ::max_fall_vel;
	if (velocity.y < ::max_fly_vel) velocity.y = ::max_fly_vel;

	body.move(velocity);

	const auto& position = body.getPosition().y;
	if (position < start_fall) fall();


}

Bird::Bird():body(texture_wing_down) //Using an Initialize() function is an anti-pattern, as your constructor should be initializing your class instance and not require a separate function.
                                      //Skeleton::Skeleton() : sprite(texture){}
{
	acceleration = { 0,0 };
	velocity = { 0,0 };
	start_fall = 0;
	

	if (!texture_wing_down.loadFromFile("Resource Files//bird_blue_down.png"))
		throw std::runtime_error("failed to load wingdown image");
	if (!texture_wing_up.loadFromFile("Resource Files//bird_blue_up.png"))
		throw std::runtime_error("failed to load win_up image");


	body.setTexture(texture_wing_up);
	body.setPosition(initial_bird_pos);
	body.setOrigin(middle);


	


}
	
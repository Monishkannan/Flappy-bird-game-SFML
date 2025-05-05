#include"Obstacle.h"
#include<stdlib.h>
#include<iostream>




Obstacle::Obstacle():bottom_Obstacle(texture),top_Obstacle(texture)
{
	velocity = { -0.15f,0 };
	if(!texture.loadFromFile(""))


}

void Obstacle::update_Obstacle()
{
}

void Obstacle::new_rand_Obstacle()
{
}

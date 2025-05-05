#pragma once
#include <SFML/Graphics.hpp>



class Bird
{
public:
   

     Bird();
     void fall();
     void fly();
     void reset();
     void update_bird();
     sf::Sprite body;

     

     

private:
    int start_fall{0};
    sf::Texture texture_wing_up;
    sf::Texture texture_wing_down;
   
    sf::Vector2f acceleration;
    sf::Vector2f velocity;



};

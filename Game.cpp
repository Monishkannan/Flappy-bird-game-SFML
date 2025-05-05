#include"Game.h"
#include<iostream>
#include<SFML/Graphics.hpp>

Game::Game(const char* title) :score{ 0 },background(background_texture)
{  
	window.create(sf::VideoMode({ 800, 800 }), title);

	if (background_texture.loadFromFile("Resource Files//sky.png"))
		throw::std::runtime_error("failed to load image");

	background.setTexture(background_texture);

}

Game::~Game()
{
	std::cout << "your score :" << score << std::endl;
}

void Game::mainloop()
{
	
	while (window.isOpen())
	{
		const sf::Event& event = nullptr;


		while (std::optional event = window.pollEvent())
		{
			handle_events(event);
		}
		if (detect_loss())
			break;

		update_objects_positions();
		window.clear();
		draw_objects();
		window.display();
	}
}
void Game::handle_events(const sf::Event& event)
{

	
	if(event.is< sf::Event::Closed>());
	window.close();

	if (event.is<sf::Event::KeyPressed>() && event.getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Space || event.getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Up);
	bird.fly();


	
	

}
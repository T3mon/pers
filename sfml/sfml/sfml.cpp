#include "stdafx.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <windows.h>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(1300, 800), "Circle");

	Texture hero_texture;
	hero_texture.loadFromFile("img/pers.png");

	Sprite hero_sprite;
	hero_sprite.setTexture(hero_texture);
	hero_sprite.setPosition(500, 400);
	hero_sprite.setTextureRect(IntRect(0, 0, 100, 160));

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) {

				window.close();

			}
		}

		window.clear();
		bool check;

		hero_texture.setSmooth(true);

		window.draw(hero_sprite);
		if (Keyboard::isKeyPressed(Keyboard::A)) {
			hero_sprite.move(-0.1, 0);
			hero_sprite.setTextureRect(IntRect(0, 160, 100, 160));
		}
		if (Keyboard::isKeyPressed(Keyboard::D)) {
			hero_sprite.move(0.1, 0);
			hero_sprite.setTextureRect(IntRect(0, 320, 100, 160));
		}
		if (Keyboard::isKeyPressed(Keyboard::S)) {
			hero_sprite.setTextureRect(IntRect(0, 0, 100, 160));
			hero_sprite.move(0, 0.1);
		}
		if (Keyboard::isKeyPressed(Keyboard::W)) {
			hero_sprite.setTextureRect(IntRect(0, 480, 100, 160));
			hero_sprite.move(0, -0.1);
		}
		if (Keyboard::isKeyPressed(Keyboard::Y)) {
			hero_sprite.setTextureRect(IntRect(0, 0, 300, 320));

		}
		if (Keyboard::isKeyPressed(Keyboard::C)) {
			hero_sprite.setColor(Color::Blue);
		}
		if (Keyboard::isKeyPressed(Keyboard::V)) {
			hero_sprite.setColor(Color::Red);
		}
		if (Keyboard::isKeyPressed(Keyboard::B)) {
			hero_sprite.setColor(Color::White);
		}
		if (Keyboard::isKeyPressed(Keyboard::F)) {

		}
		if (Keyboard::isKeyPressed(Keyboard::R)) {
			check = true;
			hero_sprite.setColor(Color::Transparent);
			if (check = true)
			{
				//hero_sprite.setColor(Color::White);
			}

		}
		window.display();
	}

	return 0;
}
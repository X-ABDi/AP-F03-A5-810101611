
#include "game.hpp"

game::game()
{
    select_line.setSize(static_objects::select_line_size);
    select_line.setFillColor(sf::Color(255, 0, 0, 96));
    select_line.setPosition(sf::Vector2f(130.f, 105.f));
}

void game::draw(sf::RenderWindow &window, sf::Event &event)
{
    
    window.draw(select_line);
}
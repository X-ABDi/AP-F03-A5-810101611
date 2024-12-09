#include "runner.hpp"

runner::runner () : window (sf::VideoMode(my_window::WIDTH, my_window::HEIGHT), my_window::WINDOW_NAME)
                    
{
    sound_buffer.loadFromFile(my_window::MUSIC_PATH);
    music.setBuffer(sound_buffer);
    music.setLoop(true);
    back_texture.loadFromFile(my_window::BACK_IMG_PATH);
    back_sprite.setTexture(back_texture);
    sf::Vector2u tex_size = back_texture.getSize();
    float x_factor = static_cast<float>(my_window::WIDTH)/tex_size.x;
    float y_factor = static_cast<float>(my_window::HEIGHT)/tex_size.y;
    back_sprite.setScale(x_factor, y_factor);
}

void runner::run()
{
    while (window.isOpen())
    {
        window.clear();
        handleEvents();
        playGroundUpdate();
        drawingWindow();
    }
}

void runner::handleKeyPressed()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {

    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {

    }
}

void runner::handleKeyReleased()
{
}

void runner::handleEvents()
{
    while (window.pollEvent(event))
    {
        auto map_it = type_of_event_map.find(event.type);
        if (map_it != type_of_event_map.end())
        {
            switch(map_it->second)
            {
                case (CLOSED):
                    window.close();
                break;
                case(KEY_PRESSED):
                    handleKeyPressed();
                break;
                case(KEY_RELEASED):
                    handleKeyReleased();
                break;    
            }
        } 
    }
}


void runner::playGroundUpdate ()
{
    
}

void runner::drawingWindow()
{
    window.draw(back_sprite);
    mutual_vars.draw(this->window, this->event);
    window.display();
}
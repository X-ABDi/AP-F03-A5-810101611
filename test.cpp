#include "runner.hpp"

#ifndef __RUNNER_H__
#define __RUNNER_H__

#include "global.hpp"
#include "player.hpp"

class runner
{
    player black_sheep;
    player white_sheep;
    sf::RenderWindow window;
    sf::Clock clock;
    sf::Event event;
    sf::Sound music;
    sf::SoundBuffer sound_buffer;
    sf::Texture back_texture;
    sf::Sprite back_sprite;
    std::thread input_thread_handling;
    // std::thread game_flow_handling;
    void inputHandler();
    void handleKeyPressed();
    void handleKeyReleased();
    public:
        runner();
        ~runner();
};

#endif

runner::runner () :
                    input_thread_handling (&runner::inputHandler, this),
                    /*game_flow_handling (&runner::gameFlow),*/
                    window (sf::VideoMode(my_window::WIDTH, my_window::HEIGHT), my_window::WINDOW_NAME)
                    
{
    // sound_buffer.loadFromFile(my_window::MUSIC_PATH);
    // music.setBuffer(sound_buffer);
    // music.setLoop(true);
    back_texture.loadFromFile(my_window::BACK_IMG_PATH, sf::IntRect(0,0,my_window::WIDTH, my_window::HEIGHT));
    back_sprite.setTexture(back_texture);
}


runner::~runner () 
{
    if (input_thread_handling.joinable())
        input_thread_handling.join();
    // if (game_flow_handling.joinable())
    //     game_flow_handling.join();    
}

void runner::inputHandler()
{
    while (window.isOpen())
    {
        window.clear();
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
        window.draw(back_sprite);
        window.display();
    }
}

#include "global.hpp"
#include "runner.hpp"

int main()
{
    runner sheepGame;
}
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
    // std::thread run;
    // std::thread game_flow_handling;
    // void inputHandler();
    void handleKeyPressed();
    void handleKeyReleased();
    public:
        runner();
        // ~runner();
        void run();
};

#endif
#ifndef __RUNNER_H__
#define __RUNNER_H__

#include "global.hpp"
#include "game.hpp"

class runner
{
    game mutual_vars;
    sf::RenderWindow window;
    sf::Clock clock;
    sf::Event event;
    sf::Sound music;
    sf::SoundBuffer sound_buffer;
    sf::Texture back_texture;
    sf::Sprite back_sprite;
    void handleEvents();
    void handleKeyPressed();
    void handleKeyReleased();
    void playGroundUpdate();
    void drawingWindow();
    public:
        runner();
        void run();

    friend class game;
    friend class player;    
};

#endif
#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <iostream>
#include <thread>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

const std::map<sf::Event::EventType, int> type_of_event_map
{
    {sf::Event::Closed, 1},
    {sf::Event::KeyPressed, 2},
    {sf::Event::KeyReleased, 3}
};

enum type_of_event_name
{
    CLOSED = 1,
    KEY_PRESSED = 2,
    KEY_RELEASED = 3
};

namespace my_window
{
    const int WIDTH = 1080;
    const int HEIGHT = 720;
    const std::string WINDOW_NAME = "SHEEP FIGHT @_@";
    const std::string MUSIC_PATH = "APF03-A5-Sprites/music/battle.wav";
    const std::string BACK_IMG_PATH = "APF03-A5-Sprites/sprites/background/background.png";
}

#endif
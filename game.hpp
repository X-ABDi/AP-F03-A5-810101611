#include "global.hpp"
#include "config.hpp"
#include "player.hpp"

struct battle_row
{
    std::vector<sheep*> fighting_sheeps;
    bool left_insert;
    bool right_insert;
};

class game
{
    player white_sheep;
    player black_sheep;
    sf::RectangleShape select_line;
    std::vector<battle_row> seven_rows;
    void draw(sf::RenderWindow &window, sf::Event &event);
    void updatePlayground(sf::RenderWindow &window, sf::Event &event);
    public:
        game();
    friend class runner;
};
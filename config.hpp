#include "global.hpp"

namespace static_objects
{
    sf::Vector2f select_line_size(800.f, 80.f);

    std::map <int, sf::Vector2f>line_positions
    {
        {1, first_line_pos(130.f, 105.f)},
        {2, second_line_pos(130.f, 185.f)},
        {3, third_line_pos(130.f, 265.f)},
        {4, forth_line_pos(130.f, 345.f)},
        {5, fifth_line_pos(130.f, 425.f)},
        {6, sixth_line_pos(130.f, 505.f)},
        {7, seventh_line_pos(130.f, 585.f)}
    }; 
    sf::Vector2f profile_pos_black(105.f, 80.f);
    sf::Vector2f profile_pos_white(955.f, 80.f);
    const int profile_radious = 50;
    const int coming_sheep_radious = 50;
    const std::string black_prof_path = "APF03-A5-Sprites/sprites/black_prof.jpeg";
    const std::string white_prof_path = "APF03-A5-Sprites/sprites/white_prof.jpeg";
    const std::string white_sheep_folder = "APF03-A5-Sprites/sprites/white-sheep";
    const std::string black_sheep_folder = "APF03-A5-Sprites/sprites/black-sheep";
    const std::string white_goat_folder = "APF03-A5-Sprites/sprites/white-goat";
    const std::string black_goat_folder = "APF03-A5-Sprites/sprites/black-goat";
    const std::string white_pig_folder = "APF03-A5-Sprites/sprites/white_pig";
    const std::string black_pig_folder = "APF03-A5-Sprites/sprites/black-pig";
    const std::string white_ram_folder = "APF03-A5-Sprites/sprites/ram";
    const std::string black_boar_folder = "APF03-A5-Sprites/sprites/boar";

    extern sf::Texture black_sheep;
    extern sf::Texture white_sheep;
    extern sf::Texture black_pig;
    extern sf::Texture white_pig;
    extern sf::Texture black_goat;
    extern sf::Texture white_goat;
    extern sf::Texture ram;
    extern sf::Texture boar;
    std::map <int, sf::Texture> black_team_texture
    {
        {1, black_sheep},
        {2, black_pig},
        {3, black_goat},
        {4, boar}
    };
    std::map <int, sf::Texture> white_team_texture
    {
        {1, white_sheep},
        {2, white_pig},
        {3, white_goat},
        {4, ram}
    };
};
    


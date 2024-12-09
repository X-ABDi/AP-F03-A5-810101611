#include "config.hpp"

sf::Texture static_objects::black_sheep;
sf::Texture static_objects::white_sheep;
sf::Texture static_objects::black_pig;
sf::Texture static_objects::white_pig;
sf::Texture static_objects::black_goat;
sf::Texture static_objects::white_goat;
sf::Texture static_objects::ram;
sf::Texture static_objects::boar;

void loadTextures ()
{
    static_objects::black_sheep.loadFromFile(static_objects::black_sheep_folder+"/single_bl_sh.png");
    static_objects::white_sheep.loadFromFile(static_objects::white_sheep_folder+"/single_wh_sh.png");
    static_objects::black_pig.loadFromFile(static_objects::black_pig_folder+"/single_bl_pig.png");
    static_objects::white_pig.loadFromFile(static_objects::white_pig_folder+"/single_wh_pig.png");
    static_objects::black_goat.loadFromFile(static_objects::black_goat_folder+"/single_bl_goat.png");
    static_objects::white_goat.loadFromFile(static_objects::white_goat_folder+"/single_wh_goat.png");
    static_objects::ram.loadFromFile(static_objects::white_ram_folder+"/single_ram.png");
    static_objects::boar.loadFromFile(static_objects::black_boar_folder+"/single_boar.png");
}
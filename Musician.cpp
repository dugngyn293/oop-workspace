#include "Musician.h"
using namespace std;

Musician::Musician() : instrument("guitar"), experience(2) {}

Musician::Musician(std::string instrument, int experience)
    : instrument(instrument), experience(experience) {}

std::string Musician::get_instrument() { return instrument; }

int Musician::get_experience() { return experience; }
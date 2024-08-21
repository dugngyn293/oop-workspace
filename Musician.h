#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>
#include <string>
using namespace std;

class Musician {
 private:
  string instrument;
  int experience;

 public:
  Musician();
  Musician(std::string instrument, int experience);
  std::string get_instrument();
  int get_experience();
};

#endif
#include "Orchestra.h"

#include "Musician.h"
Orchestra::Orchestra()
    : maxSize(0), current(0), list(nullptr) {};  // default constructor
Orchestra::Orchestra(int size) : maxSize(size), current(0) {
  list = new Musician[maxSize];
}  // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() { return current; }

// returns true if any musician in the orchestra plays the specified
// instrument otherwise returns false
bool Orchestra::has_instrument(std::string instrument) {
  for (int i = 0; i < current; i++) {
    if (list[i].get_instrument() == instrument) {
      return true;
    }
    return false;
  }
}

Musician* Orchestra::get_members() {
  return list;
};  // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not
// full otherwise returns false
bool Orchestra::add_musician(Musician new_musician) {
  if (current < maxSize) {
    list[current] = new_musician;
    current++;
    return true;
  } else {
    return false;
  }
}

Orchestra::~Orchestra() { delete[] list; };
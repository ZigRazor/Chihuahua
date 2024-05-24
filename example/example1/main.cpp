#include <iostream>

#include "UniqueIdGenerator.h"

using namespace DogBreeds;
using namespace DogBreeds::Chihuahua;

int main() {
  for (int i = 0; i < 10; i++) {
    auto id = UniqueIdGenerator::getInstance().generateId();
    std::cout << "Numeric Id = " << id.getId() << std::endl;
    std::cout << "String Id = " << id.getStringId() << std::endl;
  }

  return 0;
}

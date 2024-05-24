#include "ChihuahuaConfig.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "Running Test for Chihuahua " << CHIHUAHUA_VERSION_MAJOR << "."
            << CHIHUAHUA_VERSION_MINOR << "." << CHIHUAHUA_VERSION_PATCH
            << std::endl;
  return RUN_ALL_TESTS();
}
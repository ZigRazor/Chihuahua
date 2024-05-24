#include <gtest/gtest.h>

#include "UniqueIdGenerator.h"

using namespace DogBreeds::Chihuahua;

TEST(UniqueIdGeneratorTest, UniqueId) {
  auto id1 = UniqueIdGenerator::getInstance().generateId();
  auto id2 = UniqueIdGenerator::getInstance().generateId();
  ASSERT_NE(id1, id2);
}
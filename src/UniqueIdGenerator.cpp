#include "UniqueIdGenerator.h"

#include <mutex>

namespace DogBreeds {
namespace Chihuahua {
UniqueIdGenerator &UniqueIdGenerator::getInstance() {
  static UniqueIdGenerator instance;
  return instance;
}

UniqueId UniqueIdGenerator::generateId() {
  std::lock_guard<std::mutex> lock(m_mutex);
  UniqueId uid(m_progressive);
  m_progressive++;
  return uid;
}

}  // namespace Chihuahua

}  // namespace DogBreeds
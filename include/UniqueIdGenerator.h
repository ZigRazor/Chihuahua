#ifndef DOGBREEDS_CHIHUAHUA_UNIQUEIDGENERATOR_H
#define DOGBREEDS_CHIHUAHUA_UNIQUEIDGENERATOR_H

#include <sys/types.h>

#include <mutex>

#include "UniqueId.h"

namespace DogBreeds {
namespace Chihuahua {
class UniqueIdGenerator {
 private:
  std::mutex m_mutex;
  uint64_t m_progressive;
  UniqueIdGenerator() = default;

 public:
  virtual ~UniqueIdGenerator() = default;
  static UniqueIdGenerator &getInstance();

  UniqueIdGenerator(UniqueIdGenerator const &) = delete;
  void operator=(UniqueIdGenerator const &) = delete;

  UniqueId generateId();
};
}  // namespace Chihuahua
}  // namespace DogBreeds

#endif  // DOGBREEDS_CHIHUAHUA_UNIQUEIDGENERATOR_H
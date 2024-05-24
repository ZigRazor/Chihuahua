#ifndef DOGBREEDS_CHIHUAHUA_UNIQUEID_H
#define DOGBREEDS_CHIHUAHUA_UNIQUEID_H

#include <cstdint>
#include <string>

namespace DogBreeds {
namespace Chihuahua {

class UniqueIdGenerator;

class UniqueId {
  friend class UniqueIdGenerator;

 private:
  uint64_t m_id;
  std::string m_stringId;
  UniqueId(const uint64_t &id);

 public:
  virtual ~UniqueId() = default;

  const uint64_t &getId() const;
  const std::string &getStringId() const;

  friend bool operator==(const UniqueId &a_uid, const UniqueId &b_uid);
  friend bool operator!=(const UniqueId &a_uid, const UniqueId &b_uid);
};
}  // namespace Chihuahua
}  // namespace DogBreeds

#endif  // DOGBREEDS_CHIHUAHUA_UNIQUEID_H
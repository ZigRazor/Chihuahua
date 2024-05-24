#include "UniqueId.h"

#include <sys/types.h>

#include <string>

namespace DogBreeds {
namespace Chihuahua {
UniqueId::UniqueId(const u_int64_t &id) {
  m_id = id;
  m_stringId = std::to_string(m_id);
}

const uint64_t &UniqueId::getId() const { return m_id; }
const std::string &UniqueId::getStringId() const { return m_stringId; }

bool operator==(const UniqueId &a_uid, const UniqueId &b_uid) {
  return a_uid.m_id == b_uid.m_id && a_uid.m_stringId == b_uid.m_stringId;
}
bool operator!=(const UniqueId &a_uid, const UniqueId &b_uid) {
  return !(a_uid == b_uid);
}

}  // namespace Chihuahua
}  // namespace DogBreeds
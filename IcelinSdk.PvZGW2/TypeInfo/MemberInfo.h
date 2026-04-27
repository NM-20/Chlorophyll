#pragma once

/** @brief Provides the declaration for the `MemberInfo` structure. */

#include <IcelinSdk.PvZGW2/Noncopyable.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct MemberInfoFlags {
  enum : u16 {
    /* Frostbite packs metadata such as the `TypeInfo` kind within the
       `flagBits` member.
       We'll define some constants to make identifying them easier.
    */
    kTypeCategoryMask  = 0x03,
    kTypeCodeMask      = 0x1F,
    kTypeCodeShift     = 0x04,
    kTypeCategoryShift = 0x02,
  };

  u16 flagBits;
};

class MemberInfo : public Noncopyable {
public:
  #pragma pack(push, 2)
  /* `MemberInfoFlags`'s size is about two bytes total, and so through
      doing this, we can save extra space if an "inheriting" structure
      defines a two-byte field right after.
  */
  struct MemberInfoData {
    const char     *name;
    MemberInfoFlags flags;
  };
  #pragma pack(pop)

protected:
  /* In Frostbite, `InfoData`s do not actually inherit themselves from
     `MemberInfoData`.
     Rather, they define it as a field. We'll need to account for this.
  */
  const void *m_infoData;
};
  
}

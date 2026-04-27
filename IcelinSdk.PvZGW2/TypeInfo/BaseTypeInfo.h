#pragma once

/** @brief Provides the declaration for the `TypeInfo` structure. */

#include <IcelinSdk.PvZGW2/TypeInfo/ModuleInfo.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/TypeInfo/MemberInfo.h>

namespace fb
{

class TypeInfo : public MemberInfo {
public:
  /* TODO: Not exactly necessary right now, but attempt to implement
     these sometime.
  */
  struct CompareParams
  {};

  struct CompareState
  {};

  struct TypeInfoData {
    /* Notice how we redefine these fields. Frostbite chooses not to
       use inheritance for a reason unknown to man.
    */
    const char       *name;
    MemberInfoFlags   flags;
    u16               totalSize;
    char              pad_000C[0x0004];
    const ModuleInfo *module;
    u8                alignment;
    char              pad_0019[0x0001];
    u16               fieldCount;
    char              pad_001C[0x0004];
  };

  TypeInfo *m_pNext;
  u16       m_runtimeId;
  u16       m_flags;
  char      pad_000C[0x0004];

  /* So long as we do not notice signs of 16-byte alignment, we will
     leave it up to the compiler to handle the alignment of the type.
  */
};

}

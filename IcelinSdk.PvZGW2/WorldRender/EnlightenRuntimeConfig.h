#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855638
   RuntimeId:        182C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068A
   VfTable:          00000001422BBF70
   Address (Base):   000000014310D890
*/
#pragma pack(push, 8)
class EnlightenRuntimeConfig : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 JobCount; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EnlightenRuntimeConfig) == 32);

}

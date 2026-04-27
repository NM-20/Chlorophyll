#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A648
   RuntimeId:        07DF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E8
   VfTable:          000000014220C3F0
   Address (Base):   00000001430BE3D0
*/
#pragma pack(push, 8)
class ObjectVariation : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NameHash; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ObjectVariation) == 32);

}

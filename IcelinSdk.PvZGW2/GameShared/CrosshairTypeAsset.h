#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AFB8
   RuntimeId:        0F0F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0661
   VfTable:          00000001422619E8
   Address (Base):   00000001431138F0
*/
#pragma pack(push, 8)
class CrosshairTypeAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CrosshairTypeAsset) == 24);

}

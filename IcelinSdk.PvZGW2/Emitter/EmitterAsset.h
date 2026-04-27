#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839F38
   RuntimeId:        072E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FE
   VfTable:          00000001421FF3F8
   Address (Base):   00000001430F2520
*/
#pragma pack(push, 8)
class EmitterAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EmitterAsset) == 24);

}

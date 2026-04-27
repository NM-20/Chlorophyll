#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A6C8
   RuntimeId:        07E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0985
   VfTable:          000000014220C3B0
   Address (Base):   00000001430BE370
*/
#pragma pack(push, 16)
class SpatialReferenceObjectData : public ReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0090 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(SpatialReferenceObjectData) == 160);

}

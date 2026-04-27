#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/StaticModelEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428344D0
   RuntimeId:        01D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2C
   VfTable:          00000001421EBBB0
   Address (Base):   00000001430F3300
*/
#pragma pack(push, 16)
class CableEntityData : public StaticModelEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(CableEntityData) == 240);

}

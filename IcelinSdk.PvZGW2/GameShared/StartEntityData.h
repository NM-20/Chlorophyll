#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/StartPointEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428495E0
   RuntimeId:        0D9E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C32
   VfTable:          000000014225FF10
   Address (Base):   00000001430EE260
*/
#pragma pack(push, 8)
class StartEntityData : public StartPointEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StartEntityData) == 32);

}

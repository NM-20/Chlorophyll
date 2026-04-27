#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BAB0
   RuntimeId:        0FA8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF9
   VfTable:          00000001422683E0
   Address (Base):   00000001430D6A90
*/
#pragma pack(push, 16)
class WaterPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(WaterPhysicsComponentData) == 160);

}

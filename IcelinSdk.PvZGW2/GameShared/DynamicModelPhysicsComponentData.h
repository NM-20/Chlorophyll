#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A7C0
   RuntimeId:        0EAA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF7
   VfTable:          00000001422644B8
   Address (Base):   00000001430ED660
*/
#pragma pack(push, 16)
class DynamicModelPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ImpulseInput; /* 0x00A0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(DynamicModelPhysicsComponentData) == 176);

}

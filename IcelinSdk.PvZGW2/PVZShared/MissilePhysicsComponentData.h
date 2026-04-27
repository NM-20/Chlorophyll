#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ABF8
   RuntimeId:        25CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFB
   VfTable:          000000014235AEB0
   Address (Base):   00000001430D37F0
*/
#pragma pack(push, 16)
class MissilePhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(MissilePhysicsComponentData) == 160);

}

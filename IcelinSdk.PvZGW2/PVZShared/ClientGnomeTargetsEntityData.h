#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428656D8
   RuntimeId:        22E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA3
   VfTable:          0000000142351310
   Address (Base):   00000001430E5E00
*/
#pragma pack(push, 8)
class ClientGnomeTargetsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ChallengeId; /* 0x0018 */
  FB_INT32 RegularTargetsHit; /* 0x0020 */
  FB_INT32 DoubleTargetsHit; /* 0x0024 */
  FB_INT32 TimeFreezeTargetsHit; /* 0x0028 */
  FB_BOOLEAN Succeeded; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientGnomeTargetsEntityData) == 48);

}

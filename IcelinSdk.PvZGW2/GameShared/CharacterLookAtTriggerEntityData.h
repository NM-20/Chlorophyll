#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEventEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C130
   RuntimeId:        100E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6C
   VfTable:          0000000142267BA0
   Address (Base):   00000001430ED180
*/
#pragma pack(push, 16)
class CharacterLookAtTriggerEntityData : public TriggerEventEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FOV; /* 0x0070 */
  FB_FLOAT32 MinDistanceToObject; /* 0x0074 */
  FB_FLOAT32 MaxDistanceToObject; /* 0x0078 */
  FB_BOOLEAN StartTriggerLookingAt; /* 0x007C */
  FB_BOOLEAN CheckOcclusion; /* 0x007D */
  FB_BOOLEAN UseEntityDirection; /* 0x007E */
  char pad_007F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterLookAtTriggerEntityData) == 128);

}

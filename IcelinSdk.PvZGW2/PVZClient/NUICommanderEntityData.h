#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859738
   RuntimeId:        1B3E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BD
   VfTable:          00000001422DC0C0
   Address (Base):   00000001430E87A0
*/
#pragma pack(push, 16)
class NUICommanderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 RightHandStatus; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 RightHandPos; /* 0x0020 */
  Vec3 LeftHandPos; /* 0x0030 */
  FB_INT32 LeftHandStatus; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NUICommanderEntityData) == 80);

}

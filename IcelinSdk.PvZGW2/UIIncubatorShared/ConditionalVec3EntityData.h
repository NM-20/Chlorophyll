#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876138
   RuntimeId:        2D8A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C87
   VfTable:          0000000142393638
   Address (Base):   00000001430E0AC0
*/
#pragma pack(push, 16)
class ConditionalVec3EntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ValueIfTrue; /* 0x0020 */
  Vec3 ValueIfFalse; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ConditionalVec3EntityData) == 64);

}

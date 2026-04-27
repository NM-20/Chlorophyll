#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876118
   RuntimeId:        2D88
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C84
   VfTable:          0000000142393670
   Address (Base):   00000001430E0B20
*/
#pragma pack(push, 8)
class ConditionalVec2EntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 ValueIfTrue; /* 0x0020 */
  Vec2 ValueIfFalse; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ConditionalVec2EntityData) == 48);

}

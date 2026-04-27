#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876158
   RuntimeId:        2D8C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C86
   VfTable:          0000000142393558
   Address (Base):   00000001430E0A60
*/
#pragma pack(push, 16)
class ConditionalVec4EntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 ValueIfTrue; /* 0x0020 */
  Vec4 ValueIfFalse; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ConditionalVec4EntityData) == 64);

}

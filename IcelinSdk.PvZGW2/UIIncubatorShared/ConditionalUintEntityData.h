#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428760D8
   RuntimeId:        2D84
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C83
   VfTable:          00000001423934E8
   Address (Base):   00000001430E0BE0
*/
#pragma pack(push, 8)
class ConditionalUintEntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ValueIfTrue; /* 0x0020 */
  FB_UINT32 ValueIfFalse; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ConditionalUintEntityData) == 40);

}

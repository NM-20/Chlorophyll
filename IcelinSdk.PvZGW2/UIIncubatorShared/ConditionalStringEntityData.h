#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876198
   RuntimeId:        2D90
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C85
   VfTable:          0000000142393590
   Address (Base):   00000001430E09A0
*/
#pragma pack(push, 8)
class ConditionalStringEntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ValueIfTrue; /* 0x0020 */
  FB_CSTRING ValueIfFalse; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ConditionalStringEntityData) == 48);

}

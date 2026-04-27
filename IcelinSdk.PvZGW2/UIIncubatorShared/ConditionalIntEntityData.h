#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428760B8
   RuntimeId:        2D82
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C81
   VfTable:          0000000142393520
   Address (Base):   00000001430E0C40
*/
#pragma pack(push, 8)
class ConditionalIntEntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ValueIfTrue; /* 0x0020 */
  FB_INT32 ValueIfFalse; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ConditionalIntEntityData) == 40);

}

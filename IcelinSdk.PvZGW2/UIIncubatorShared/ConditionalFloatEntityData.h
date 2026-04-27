#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428760F8
   RuntimeId:        2D86
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C82
   VfTable:          0000000142393600
   Address (Base):   00000001430E0B80
*/
#pragma pack(push, 8)
class ConditionalFloatEntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ValueIfTrue; /* 0x0020 */
  FB_FLOAT32 ValueIfFalse; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ConditionalFloatEntityData) == 40);

}

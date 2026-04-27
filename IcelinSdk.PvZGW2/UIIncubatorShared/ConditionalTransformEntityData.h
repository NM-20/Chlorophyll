#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConditionalStateEntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876178
   RuntimeId:        2D8E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C88
   VfTable:          00000001423935C8
   Address (Base):   00000001430E0A00
*/
#pragma pack(push, 16)
class ConditionalTransformEntityData : public ConditionalStateEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform ValueIfTrue; /* 0x0020 */
  LinearTransform ValueIfFalse; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ConditionalTransformEntityData) == 160);

}

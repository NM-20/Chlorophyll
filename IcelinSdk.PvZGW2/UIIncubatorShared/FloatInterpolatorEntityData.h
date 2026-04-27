#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/PropertyInterpolatorEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428764C8
   RuntimeId:        2DBC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C0
   VfTable:          00000001423933C8
   Address (Base):   00000001430E0760
*/
#pragma pack(push, 8)
class FloatInterpolatorEntityData : public PropertyInterpolatorEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 In; /* 0x0030 */
  FB_FLOAT32 DefaultValue; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FloatInterpolatorEntityData) == 56);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B380
   RuntimeId:        0F3F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B5
   VfTable:          0000000142260AA8
   Address (Base):   0000000143113590
*/
#pragma pack(push, 8)
class InputCurveData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) AffectedInputs; /* 0x0010 */
  FB_STDARRAY(struct Vec2) InputModifierCurve; /* 0x0018 */
  FB_BOOLEAN HandleMultipleInputsAsSquare; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputCurveData) == 40);

}

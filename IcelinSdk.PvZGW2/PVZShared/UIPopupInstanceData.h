#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871AA0
   RuntimeId:        2AAB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1151
   VfTable:          000000014236C2B0
   Address (Base):   00000001430F59B0
*/
#pragma pack(push, 8)
class UIPopupInstanceData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPopupInstanceData) == 16);

}

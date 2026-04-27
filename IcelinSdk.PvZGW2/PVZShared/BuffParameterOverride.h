#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C118
   RuntimeId:        26C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F10
   VfTable:          0000000142366A58
   Address (Base):   00000001430F7510
*/
#pragma pack(push, 8)
class BuffParameterOverride : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffParameterAsset) BuffParameter; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffParameterOverride) == 24);

}

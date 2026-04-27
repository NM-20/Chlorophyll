#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C388
   RuntimeId:        26DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDB
   VfTable:          0000000142366838
   Address (Base):   00000001430F74B0
*/
#pragma pack(push, 8)
class BuffStateControllerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN SupportsLocalPower; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffStateControllerData) == 24);

}

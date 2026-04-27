#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E928
   RuntimeId:        1227
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FB
   VfTable:          0000000142272DA0
   Address (Base):   0000000143111430
*/
#pragma pack(push, 8)
class ColorUnlockPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ColorReference) ColorReference; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ColorUnlockPartData) == 24);

}

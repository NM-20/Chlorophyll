#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EB18
   RuntimeId:        1245
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1117
   VfTable:          0000000142272C98
   Address (Base):   0000000143110F50
*/
#pragma pack(push, 8)
class CustomizationTable : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CustomizationUnlockParts) UnlockParts; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CustomizationTable) == 24);

}

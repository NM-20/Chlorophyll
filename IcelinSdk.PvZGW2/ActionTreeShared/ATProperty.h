#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832478
   RuntimeId:        003C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0894
   VfTable:          00000001421E31F0
   Address (Base):   00000001430DD130
*/
#pragma pack(push, 8)
class ATProperty : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATProperty) == 16);

}

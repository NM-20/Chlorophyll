#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B4C0
   RuntimeId:        0F53
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061A
   VfTable:          0000000142260890
   Address (Base):   00000001430FD0F0
*/
#pragma pack(push, 8)
class InputActionMappingData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(InputActionMappingData) == 16);

}

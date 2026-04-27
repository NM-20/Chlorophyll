#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B4A0
   RuntimeId:        0F51
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E8C
   VfTable:          00000001422607C8
   Address (Base):   00000001431134D0
*/
#pragma pack(push, 8)
class InputActionMappingsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class InputActionMappingData) Mappings; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(InputActionMappingsData) == 24);

}

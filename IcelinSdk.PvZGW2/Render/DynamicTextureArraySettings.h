#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428525B0
   RuntimeId:        1584
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF3
   VfTable:          000000014228DDA0
   Address (Base):   00000001430D0740
*/
#pragma pack(push, 8)
class DynamicTextureArraySettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 IesTextureSize; /* 0x0010 */
  FB_UINT32 IesTextureArraySize; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DynamicTextureArraySettings) == 24);

}

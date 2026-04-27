#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DynamicDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A528
   RuntimeId:        07CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0F
   VfTable:          000000014220C490
   Address (Base):   00000001430F0AE0
*/
#pragma pack(push, 8)
class InterfaceDescriptorData : public DynamicDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DynamicEvent) InputEvents; /* 0x0018 */
  FB_STDARRAY(struct DynamicEvent) OutputEvents; /* 0x0020 */
  FB_STDARRAY(struct DynamicLink) InputLinks; /* 0x0028 */
  FB_STDARRAY(struct DynamicLink) OutputLinks; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(InterfaceDescriptorData) == 56);

}

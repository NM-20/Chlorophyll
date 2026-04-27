#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A310
   RuntimeId:        2569
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E61
   VfTable:          000000014235B398
   Address (Base):   00000001430B62E0
*/
#pragma pack(push, 8)
class UIItemDescription : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) ItemIds; /* 0x0010 */
  FB_STDARRAY(FB_UINT32) HiddenInProgressionIds; /* 0x0018 */
  FB_BOOLEAN IgnoreBuild; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIItemDescription) == 40);

}

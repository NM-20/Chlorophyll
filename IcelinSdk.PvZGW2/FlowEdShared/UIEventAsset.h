#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856B18
   RuntimeId:        1935
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F4
   VfTable:          00000001422CB528
   Address (Base):   000000014310D2F0
*/
#pragma pack(push, 8)
class UIEventAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Category; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) EventList; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIEventAsset) == 40);

}

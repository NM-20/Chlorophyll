#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864498
   RuntimeId:        21E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1174
   VfTable:          0000000142352820
   Address (Base):   00000001430E5380
*/
#pragma pack(push, 8)
class CustomizationGestureInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationUnlockInfo) UnlockInfo; /* 0x0010 */
  FB_CSTRING GestureName; /* 0x0018 */
  FB_UINT32 GestureId; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING GestureIconId; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CustomizationGestureInfo) == 48);

}

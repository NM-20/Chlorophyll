#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864458
   RuntimeId:        21DF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFB
   VfTable:          0000000142352790
   Address (Base):   00000001430E5440
*/
#pragma pack(push, 8)
class CustomizationAbilityInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationUnlockInfo) UnlockInfo; /* 0x0010 */
  FB_CSTRING AbilityName; /* 0x0018 */
  FB_UINT32 AbilityId; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING AbilityIconId; /* 0x0028 */
  FB_CSTRING AbilityDescription; /* 0x0030 */
  FB_CSTRING AbilityImageId; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CustomizationAbilityInfo) == 64);

}

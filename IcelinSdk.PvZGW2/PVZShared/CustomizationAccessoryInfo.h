#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864418
   RuntimeId:        21DB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC9
   VfTable:          00000001423527A0
   Address (Base):   00000001430E5500
*/
#pragma pack(push, 8)
class CustomizationAccessoryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationUnlockInfo) UnlockInfo; /* 0x0010 */
  FB_CSTRING AccessoryName; /* 0x0018 */
  FB_CSTRING AccessoryURL; /* 0x0020 */
  FB_UINT32 AccessoryId; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING AccessoryIconId; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CustomizationAccessoryInfo) == 56);

}

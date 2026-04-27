#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CEE8
   RuntimeId:        2790
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDC
   VfTable:          00000001423661A0
   Address (Base):   00000001430CE4B0
*/
#pragma pack(push, 8)
class PVZBuffStateControllerData : public BuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class InputRestrictionAsset) CancelInput; /* 0x0018 */
  FB_BOOLEAN KillOnManDown; /* 0x0020 */
  FB_BOOLEAN KillOnPolymorphStarted; /* 0x0021 */
  FB_BOOLEAN KillOnPolymorphEnded; /* 0x0022 */
  FB_BOOLEAN KillOnEnteredSecondary; /* 0x0023 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZBuffStateControllerData) == 40);

}

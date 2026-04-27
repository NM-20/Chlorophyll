#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871EF8
   RuntimeId:        2AEF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDE
   VfTable:          000000014236BF60
   Address (Base):   00000001430E1DE0
*/
#pragma pack(push, 8)
class UIStickerBookCostumeWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CostumeBlueprintPath; /* 0x0048 */
  FB_INT32 ClassIndex; /* 0x0050 */
  FB_INT32 CostumeIndex; /* 0x0054 */
  FB_BOOLEAN IsValid; /* 0x0058 */
  FB_BOOLEAN Plants; /* 0x0059 */
  char pad_005A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookCostumeWidgetData) == 96);

}

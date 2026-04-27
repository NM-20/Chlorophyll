#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIObjectTagComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A890
   RuntimeId:        25AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5A
   VfTable:          000000014235B220
   Address (Base):   00000001430E4840
*/
#pragma pack(push, 16)
class UICharacterObjectTagComponentData : public UIObjectTagComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN UseForTemplateOverride; /* 0x0090 */
  char pad_0091[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(UICharacterObjectTagComponentData) == 160);

}

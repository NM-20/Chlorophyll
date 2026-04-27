#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementTextFilter.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C388
   RuntimeId:        102C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E80
   VfTable:          0000000142267A70
   Address (Base):   0000000143112810
*/
#pragma pack(push, 16)
class UIElementTextFilterGlow : public UIElementTextFilter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0010 */
  FB_FLOAT32 Y; /* 0x0014 */
  char pad_0018[0x0008];
  UIElementColor Color; /* 0x0020 */
  FB_FLOAT32 Strength; /* 0x0040 */
  FB_BOOLEAN KnockOut; /* 0x0044 */
  FB_BOOLEAN HideObject; /* 0x0045 */
  FB_BOOLEAN FineBlur; /* 0x0046 */
  char pad_0047[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIElementTextFilterGlow) == 80);

}

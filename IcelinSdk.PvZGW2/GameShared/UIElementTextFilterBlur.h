#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementTextFilter.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C348
   RuntimeId:        1028
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E7F
   VfTable:          0000000142267A90
   Address (Base):   00000001431128D0
*/
#pragma pack(push, 8)
class UIElementTextFilterBlur : public UIElementTextFilter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0010 */
  FB_FLOAT32 Y; /* 0x0014 */
  FB_FLOAT32 Strength; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIElementTextFilterBlur) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876958
   RuntimeId:        2DF5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB0
   VfTable:          0000000142392EE8
   Address (Base):   00000001430E04C0
*/
#pragma pack(push, 16)
class UIElementVideoEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING VideoPlayerIdentifier; /* 0x00E0 */
  FB_BOOLEAN Fullscreen; /* 0x00E8 */
  char pad_00E9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(UIElementVideoEntityData) == 240);

}

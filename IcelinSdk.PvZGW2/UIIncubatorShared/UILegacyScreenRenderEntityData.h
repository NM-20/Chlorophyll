#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIScreenRenderEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428769F8
   RuntimeId:        2DFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0980
   VfTable:          0000000142392F50
   Address (Base):   00000001430E0640
*/
#pragma pack(push, 16)
class UILegacyScreenRenderEntityData : public UIScreenRenderEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) InputEvents; /* 0x00E0 */
  FB_STDARRAY(FB_CSTRING) OutputEvents; /* 0x00E8 */
  FB_STDARRAY(FB_CSTRING) InputFloatProperties; /* 0x00F0 */
  FB_STDARRAY(FB_CSTRING) InputIntProperties; /* 0x00F8 */
  FB_STDARRAY(FB_CSTRING) InputBoolProperties; /* 0x0100 */
  FB_STDARRAY(FB_CSTRING) InputStringProperties; /* 0x0108 */
  FB_STDARRAY(FB_CSTRING) InputTransformProperties; /* 0x0110 */
  FB_STDARRAY(FB_CSTRING) InputVec3Properties; /* 0x0118 */
  FB_STDARRAY(FB_CSTRING) InputVec4Properties; /* 0x0120 */
  FB_BOOLEAN ConsumeInputs; /* 0x0128 */
  char pad_0129[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderEntityData) == 304);

}

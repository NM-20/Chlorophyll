#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876778
   RuntimeId:        2DD7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B4
   VfTable:          00000001423930E8
   Address (Base):   0000000143102F70
*/
#pragma pack(push, 8)
class UIElementSlice9FillData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TextureId; /* 0x0018 */
  FB_INT32 MarginTop; /* 0x0020 */
  FB_INT32 MarginLeft; /* 0x0024 */
  FB_INT32 MarginRight; /* 0x0028 */
  FB_INT32 MarginBottom; /* 0x002C */
  FB_INT32 ExpandTop; /* 0x0030 */
  FB_INT32 ExpandLeft; /* 0x0034 */
  FB_INT32 ExpandRight; /* 0x0038 */
  FB_INT32 ExpandBottom; /* 0x003C */
  FB_FLOAT32 Scale; /* 0x0040 */
  FB_BOOLEAN TiledFill; /* 0x0044 */
  FB_BOOLEAN FillCenter; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIElementSlice9FillData) == 72);

}

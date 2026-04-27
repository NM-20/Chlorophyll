#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementTrigger.h>

namespace fb
{

/* TypeInfo (Array): 00000001428768D8
   RuntimeId:        2DED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E08
   VfTable:          0000000142392F20
   Address (Base):   00000001430F4A50
*/
#pragma pack(push, 8)
class UIElementAction : public UIElementTrigger
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Key; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(FB_CSTRING) Params; /* 0x0018 */
  FB_HANDLE(class Asset) ActionAsset; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIElementAction) == 40);

}

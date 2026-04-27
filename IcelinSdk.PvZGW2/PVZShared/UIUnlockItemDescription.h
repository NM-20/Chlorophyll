#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 00000001428721A8
   RuntimeId:        2B19
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E69
   VfTable:          000000014236BCE8
   Address (Base):   00000001430BDD10
*/
#pragma pack(push, 8)
class UIUnlockItemDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING Category; /* 0x0038 */
  FB_CSTRING ImageName; /* 0x0040 */
  RarenessLevel RarenessLevel; /* 0x0048 */
  FB_INT32 TeamId; /* 0x004C */
  FB_CSTRING TexturePath; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIUnlockItemDescription) == 88);

}

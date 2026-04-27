#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872048
   RuntimeId:        2B03
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6C
   VfTable:          000000014236BD98
   Address (Base):   00000001430CFBA0
*/
#pragma pack(push, 8)
class UIConsumableDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING Category; /* 0x0038 */
  RarenessLevel RarenessLevel; /* 0x0040 */
  char pad_0044[0x0004];
  FB_CSTRING ImageName; /* 0x0048 */
  FB_CSTRING AIImageName; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIConsumableDescription) == 88);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428492A0
   RuntimeId:        0D6A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9A
   VfTable:          0000000142260320
   Address (Base):   0000000143114670
*/
#pragma pack(push, 8)
class UIMinimapVolumeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Asset) Asset; /* 0x0018 */
  FB_BOOLEAN IsDefault; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapVolumeEntityData) == 40);

}

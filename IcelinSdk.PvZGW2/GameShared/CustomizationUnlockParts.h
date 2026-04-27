#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizationLayer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EB58
   RuntimeId:        1249
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4B
   VfTable:          0000000142272C78
   Address (Base):   00000001430FCC70
*/
#pragma pack(push, 8)
class CustomizationUnlockParts : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING UICategorySid; /* 0x0010 */
  FB_UINT32 DefaultSelectionIndex; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class UnlockAssetBase) SelectableUnlocks; /* 0x0020 */
  CustomizationLayer UILockLayer; /* 0x0028 */
  FB_BOOLEAN Selectable; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CustomizationUnlockParts) == 48);

}

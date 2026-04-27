#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ECD0
   RuntimeId:        1255
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FD
   VfTable:          0000000142272BB8
   Address (Base):   00000001430FCC10
*/
#pragma pack(push, 8)
class CustomizeCharacterData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct CustomizeVisual) VisualGroups; /* 0x0018 */
  FB_REFARRAY(class UnlockAssetBase) Unlocks; /* 0x0020 */
  FB_FLOAT32 OverrideMaxHealth; /* 0x0028 */
  FB_FLOAT32 OverrideTimeForCorpse; /* 0x002C */
  FB_FLOAT32 OverrideManDownTime; /* 0x0030 */
  FB_FLOAT32 OverrideCriticalHealthThreshold; /* 0x0034 */
  FB_BOOLEAN RestoreToOriginalVisualState; /* 0x0038 */
  FB_BOOLEAN ClearVisualState; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CustomizeCharacterData) == 64);

}

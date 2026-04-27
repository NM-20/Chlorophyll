#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C178
   RuntimeId:        26CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074C
   VfTable:          0000000142366A10
   Address (Base):   00000001430CFEA0
*/
#pragma pack(push, 8)
class BuffData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffStateControllerData) BuffStateController; /* 0x0018 */
  FB_REFARRAY(class BuffRestrictorData) BuffRestrictors; /* 0x0020 */
  FB_REFARRAY(class BuffEffectData) BuffEffects; /* 0x0028 */
  FB_REFARRAY(class BuffTypeData) BuffTypes; /* 0x0030 */
  FB_BOOLEAN Unique; /* 0x0038 */
  FB_BOOLEAN PreventPolymorphEnd; /* 0x0039 */
  FB_BOOLEAN AlsoApplyOnOriginalPrimary; /* 0x003A */
  FB_BOOLEAN KillChildBuffs; /* 0x003B */
  FB_BOOLEAN IsDispellable; /* 0x003C */
  FB_BOOLEAN IsApplicableToCustomization; /* 0x003D */
  char pad_003E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BuffData) == 64);

}

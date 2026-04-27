#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AE00
   RuntimeId:        0859
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A1F
   VfTable:          000000014220BAF8
   Address (Base):   00000001430F0300
*/
#pragma pack(push, 8)
class ObjectVariationMultiSwitchEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ObjectVariation) Variations; /* 0x0018 */
  FB_INT32 CurrentIndex; /* 0x0020 */
  FB_BOOLEAN SetOnInit; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ObjectVariationMultiSwitchEntityData) == 40);

}

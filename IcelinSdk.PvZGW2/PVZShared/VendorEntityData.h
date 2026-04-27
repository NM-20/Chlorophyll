#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428645D8
   RuntimeId:        21F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF4
   VfTable:          00000001423526E8
   Address (Base):   00000001430E69A0
*/
#pragma pack(push, 8)
class VendorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Cost; /* 0x0018 */
  FB_BOOLEAN DefaultEnabled; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VendorEntityData) == 32);

}

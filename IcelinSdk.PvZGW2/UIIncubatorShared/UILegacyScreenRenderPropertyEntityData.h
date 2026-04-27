#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876A18
   RuntimeId:        2E01
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6C
   VfTable:          0000000142392FC8
   Address (Base):   00000001430BF5F0
*/
#pragma pack(push, 8)
class UILegacyScreenRenderPropertyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 PropertyId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderPropertyEntityData) == 32);

}

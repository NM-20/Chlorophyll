#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865D88
   RuntimeId:        234B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C26
   VfTable:          0000000142350B38
   Address (Base):   00000001430E5D40
*/
#pragma pack(push, 8)
class CrazyControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 OptionIndex; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CrazyControlEntityData) == 32);

}

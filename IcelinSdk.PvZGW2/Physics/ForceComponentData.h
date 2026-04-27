#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851A08
   RuntimeId:        14C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC1
   VfTable:          000000014227F258
   Address (Base):   00000001430EB1A0
*/
#pragma pack(push, 16)
class ForceComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WindPhysicsActionData) WindActionData; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ForceComponentData) == 128);

}

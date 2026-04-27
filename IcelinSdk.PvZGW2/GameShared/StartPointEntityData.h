#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428495C0
   RuntimeId:        0D9C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C31
   VfTable:          000000014225FF80
   Address (Base):   00000001430DC4D0
*/
#pragma pack(push, 8)
class StartPointEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING StartName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StartPointEntityData) == 32);

}

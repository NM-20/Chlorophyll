#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871300
   RuntimeId:        2A45
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          099B
   VfTable:          000000014236CAA0
   Address (Base):   00000001430E2FE0
*/
#pragma pack(push, 8)
class ClientUIVOIPOverlayEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TargetDisplayName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClientUIVOIPOverlayEntityData) == 32);

}

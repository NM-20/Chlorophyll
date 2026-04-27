#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BB30
   RuntimeId:        0FB0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A72
   VfTable:          00000001422682C8
   Address (Base):   0000000143113230
*/
#pragma pack(push, 8)
class DebugMenuSubMenuEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Text; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DebugMenuSubMenuEntityData) == 32);

}

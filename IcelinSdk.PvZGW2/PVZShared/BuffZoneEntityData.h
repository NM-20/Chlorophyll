#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BFE8
   RuntimeId:        26B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACF
   VfTable:          0000000142366AE8
   Address (Base):   00000001430E4660
*/
#pragma pack(push, 16)
class BuffZoneEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0018 */
  LinearTransform RootPosition; /* 0x0020 */
  MaterialDecl Material; /* 0x0060 */
  FB_BOOLEAN Active; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BuffZoneEntityData) == 112);

}

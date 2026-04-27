#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BF88
   RuntimeId:        26B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE4
   VfTable:          0000000142366B60
   Address (Base):   00000001430D32B0
*/
#pragma pack(push, 16)
class BuffEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform RootPosition; /* 0x0020 */
  FB_HANDLE(class BuffData) Buff; /* 0x0060 */
  FB_INT32 Source; /* 0x0068 */
  MaterialDecl Material; /* 0x006C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BuffEntityData) == 112);

}

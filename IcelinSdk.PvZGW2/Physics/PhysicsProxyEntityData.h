#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851AA8
   RuntimeId:        14CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B04
   VfTable:          000000014227F080
   Address (Base):   00000001430EB080
*/
#pragma pack(push, 16)
class PhysicsProxyEntityData : public ComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class PhysicsEntityData) PhysicsData; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PhysicsProxyEntityData) == 128);

}

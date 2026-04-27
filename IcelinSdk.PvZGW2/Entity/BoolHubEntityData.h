#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AE60
   RuntimeId:        085F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B98
   VfTable:          000000014220BA50
   Address (Base):   00000001430F01E0
*/
#pragma pack(push, 8)
class BoolHubEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 InputSelect; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolHubEntityData) == 32);

}

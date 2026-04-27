#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864518
   RuntimeId:        21EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0C
   VfTable:          0000000142352660
   Address (Base):   00000001430D48D0
*/
#pragma pack(push, 16)
class PlayerTransformEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 YOffset; /* 0x0084 */
  FB_BOOLEAN UseCenter; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PlayerTransformEntityData) == 144);

}

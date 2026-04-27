#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428707F0
   RuntimeId:        29BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5B
   VfTable:          000000014236D678
   Address (Base):   00000001430E35E0
*/
#pragma pack(push, 8)
class UICostumeDataFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0018 */
  FB_INT32 ClassIndex; /* 0x001C */
  FB_INT32 CostumeIndex; /* 0x0020 */
  FB_UINT32 UnlockID; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UICostumeDataFilterEntityData) == 40);

}

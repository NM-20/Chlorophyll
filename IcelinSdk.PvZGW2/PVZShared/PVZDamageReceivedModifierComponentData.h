#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageModifierComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864208
   RuntimeId:        21BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA4
   VfTable:          0000000142352A48
   Address (Base):   00000001430D5170
*/
#pragma pack(push, 16)
class PVZDamageReceivedModifierComponentData : public DamageModifierComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0070 */
  FB_FLOAT32 DamageScale; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZDamageReceivedModifierComponentData) == 128);

}

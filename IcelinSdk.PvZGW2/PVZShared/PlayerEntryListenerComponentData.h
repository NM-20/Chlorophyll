#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864198
   RuntimeId:        21B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D42
   VfTable:          0000000142352AC8
   Address (Base):   00000001430DA610
*/
#pragma pack(push, 16)
class PlayerEntryListenerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PlayerEntryListenerComponentData) == 128);

}

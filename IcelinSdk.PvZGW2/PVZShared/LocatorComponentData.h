#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863EE8
   RuntimeId:        218B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3C
   VfTable:          0000000142352EE8
   Address (Base):   00000001430D4B70
*/
#pragma pack(push, 16)
class LocatorComponentData : public GameComponentData
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

static_assert(sizeof(LocatorComponentData) == 128);

}

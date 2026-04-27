#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863BC8
   RuntimeId:        2159
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1E
   VfTable:          00000001423533C8
   Address (Base):   00000001430D4510
*/
#pragma pack(push, 16)
class WeaponCharacterProxyComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WeaponCharacterProxyComponentData) == 112);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863A88
   RuntimeId:        2145
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D40
   VfTable:          00000001423535E8
   Address (Base):   00000001430D50B0
*/
#pragma pack(push, 16)
class ObjectProjectileInfoData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ObjectProjectileInfoData) == 112);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SettingEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CF1
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0382
   VfTable:          0000000000000000
   Address (Base):   00000001431396B0
*/
class ServerSettingEntity : public SettingEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0058[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ServerSettingEntity) == 96);

}

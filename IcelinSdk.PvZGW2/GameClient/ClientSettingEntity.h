#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SettingEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A5D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0381
   VfTable:          0000000000000000
   Address (Base):   000000014313C9F0
*/
class ClientSettingEntity : public SettingEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(ClientSettingEntity) == 88);

}

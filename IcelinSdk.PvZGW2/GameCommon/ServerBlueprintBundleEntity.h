#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/BlueprintBundleEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B23
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0590
   VfTable:          0000000000000000
   Address (Base):   000000014313B730
*/
class ServerBlueprintBundleEntity : public BlueprintBundleEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(ServerBlueprintBundleEntity) == 136);

}

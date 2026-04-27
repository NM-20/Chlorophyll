#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/BlueprintBundleEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B22
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0591
   VfTable:          0000000000000000
   Address (Base):   000000014313B7D0
*/
class ClientBlueprintBundleEntity : public BlueprintBundleEntityBase
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ClientBlueprintBundleEntity) == 120);

}

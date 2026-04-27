#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/ShockwaveCollisionInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        152C
   TypeInfo Kind:    ClassInfo
   ClassId:          00CD
   VfTable:          0000000000000000
   Address (Base):   0000000143121970
*/
class ServerShockwaveCollisionInfo : public ShockwaveCollisionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ServerShockwaveCollisionInfo) == 224);

}

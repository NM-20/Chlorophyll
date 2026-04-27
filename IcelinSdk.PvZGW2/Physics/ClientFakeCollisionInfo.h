#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FakeCollisionInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1528
   TypeInfo Kind:    ClassInfo
   ClassId:          00CF
   VfTable:          0000000000000000
   Address (Base):   000000014311F2F0
*/
class ClientFakeCollisionInfo : public FakeCollisionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ClientFakeCollisionInfo) == 224);

}

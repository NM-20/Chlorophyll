#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FakeCollisionInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1529
   TypeInfo Kind:    ClassInfo
   ClassId:          00D0
   VfTable:          0000000000000000
   Address (Base):   0000000143121A10
*/
class ServerFakeCollisionInfo : public FakeCollisionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00D0[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ServerFakeCollisionInfo) == 240);

}

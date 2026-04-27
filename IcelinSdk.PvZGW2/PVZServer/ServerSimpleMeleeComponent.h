#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SimpleMeleeComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EB9
   TypeInfo Kind:    ClassInfo
   ClassId:          0214
   VfTable:          0000000000000000
   Address (Base):   00000001430B6AA0
*/
class ServerSimpleMeleeComponent : public SimpleMeleeComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0F40[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0FF0 */

static_assert(sizeof(ServerSimpleMeleeComponent) == 4080);

}

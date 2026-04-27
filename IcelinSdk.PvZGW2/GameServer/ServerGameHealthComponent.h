#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/HealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D02
   TypeInfo Kind:    ClassInfo
   ClassId:          0236
   VfTable:          0000000000000000
   Address (Base):   00000001430BD990
*/
class ServerGameHealthComponent : public HealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0028[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerGameHealthComponent) == 48);

}

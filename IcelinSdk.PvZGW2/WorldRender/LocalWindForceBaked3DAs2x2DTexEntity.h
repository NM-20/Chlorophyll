#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A0
   VfTable:          0000000000000000
   Address (Base):   00000001431383F0
*/
class LocalWindForceBaked3DAs2x2DTexEntity : public LocalWindForceEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00E0[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexEntity) == 320);

}

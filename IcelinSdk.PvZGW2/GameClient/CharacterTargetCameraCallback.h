#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCameraCallback.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A2C
   TypeInfo Kind:    ClassInfo
   ClassId:          0105
   VfTable:          0000000000000000
   Address (Base):   0000000143122000
*/
class CharacterTargetCameraCallback : public TargetCameraCallback
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(CharacterTargetCameraCallback) == 24);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCameraCallback.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF0
   TypeInfo Kind:    ClassInfo
   ClassId:          0100
   VfTable:          0000000000000000
   Address (Base):   00000001431208E0
*/
class ClientPVZCharacterCameraCallback : public TargetCameraCallback
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(ClientPVZCharacterCameraCallback) == 24);

}

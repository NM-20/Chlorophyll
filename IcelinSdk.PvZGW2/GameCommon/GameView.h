#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TargetCameraCallback.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BD5
   TypeInfo Kind:    ClassInfo
   ClassId:          0101
   VfTable:          0000000000000000
   Address (Base):   000000014311F570
*/
class GameView : public TargetCameraCallback
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(GameView) == 16);

}

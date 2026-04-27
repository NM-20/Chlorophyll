#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/GameView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CFA
   TypeInfo Kind:    ClassInfo
   ClassId:          0102
   VfTable:          0000000000000000
   Address (Base):   0000000143121C40
*/
class ServerGameView : public GameView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ServerGameView) == 192);

}

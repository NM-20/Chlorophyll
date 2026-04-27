#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/BaseTask.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF6
   TypeInfo Kind:    ClassInfo
   ClassId:          0003
   VfTable:          0000000000000000
   Address (Base):   00000001431205C0
*/
class MoveTask : public BaseTask
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(MoveTask) == 112);

}

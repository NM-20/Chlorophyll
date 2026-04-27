#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/Tool.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26AA
   TypeInfo Kind:    ClassInfo
   ClassId:          00E4
   VfTable:          0000000000000000
   Address (Base):   00000001431014B0
*/
class Weapon : public Tool
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x02E8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0300 */

static_assert(sizeof(Weapon) == 768);

}

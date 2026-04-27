#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DestructionInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1532
   TypeInfo Kind:    ClassInfo
   ClassId:          00C9
   VfTable:          0000000000000000
   Address (Base):   00000001431218D0
*/
class ServerDestructionInfo : public DestructionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0070[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerDestructionInfo) == 120);

}

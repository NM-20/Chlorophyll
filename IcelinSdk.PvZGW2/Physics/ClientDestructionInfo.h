#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DestructionInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1533
   TypeInfo Kind:    ClassInfo
   ClassId:          00CA
   VfTable:          0000000000000000
   Address (Base):   0000000143121880
*/
class ClientDestructionInfo : public DestructionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0070[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ClientDestructionInfo) == 120);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1546
   TypeInfo Kind:    ClassInfo
   ClassId:          00BC
   VfTable:          0000000000000000
   Address (Base):   00000001430FB890
*/
#pragma pack(push, 8)
class IglooSubsystem
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IglooSubsystem) == 24);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1545
   TypeInfo Kind:    ClassInfo
   ClassId:          00BE
   VfTable:          0000000000000000
   Address (Base):   00000001430FB830
*/
#pragma pack(push, 8)
class IglooMemoryContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(IglooMemoryContext) == 8);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1543
   TypeInfo Kind:    ClassInfo
   ClassId:          00C2
   VfTable:          0000000000000000
   Address (Base):   00000001430D5D10
*/
#pragma pack(push, 8)
class IglooEntityFactory
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(IglooEntityFactory) == 40);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1542
   TypeInfo Kind:    ClassInfo
   ClassId:          00C7
   VfTable:          0000000000000000
   Address (Base):   000000014310EC10
*/
#pragma pack(push, 8)
class IglooDebugRenderer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IglooDebugRenderer) == 24);

}

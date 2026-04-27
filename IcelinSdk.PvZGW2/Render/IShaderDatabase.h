#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        154D
   TypeInfo Kind:    ClassInfo
   ClassId:          00A8
   VfTable:          0000000000000000
   Address (Base):   00000001430DE370
*/
class IShaderDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(IShaderDatabase) == 8);

}

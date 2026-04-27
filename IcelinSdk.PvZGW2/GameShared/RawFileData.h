#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        12EE
   TypeInfo Kind:    ClassInfo
   ClassId:          00DF
   VfTable:          0000000000000000
   Address (Base):   0000000143101E60
*/
class RawFileData
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(RawFileData) == 40);

}

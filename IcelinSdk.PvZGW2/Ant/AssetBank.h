#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        02F1
   TypeInfo Kind:    ClassInfo
   ClassId:          05D9
   VfTable:          0000000000000000
   Address (Base):   00000001430DFB30
*/
class AssetBank
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(AssetBank) == 128);

}

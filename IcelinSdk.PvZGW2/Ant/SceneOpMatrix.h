#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        02EF
   TypeInfo Kind:    ClassInfo
   ClassId:          05DB
   VfTable:          0000000000000000
   Address (Base):   000000014311F750
*/
class SceneOpMatrix
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(SceneOpMatrix) == 128);

}

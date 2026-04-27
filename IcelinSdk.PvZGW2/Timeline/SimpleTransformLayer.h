#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17D2
   TypeInfo Kind:    ClassInfo
   ClassId:          0095
   VfTable:          0000000000000000
   Address (Base):   0000000143121470
*/
class SimpleTransformLayer : public TransformLayer
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(SimpleTransformLayer) == 112);

}

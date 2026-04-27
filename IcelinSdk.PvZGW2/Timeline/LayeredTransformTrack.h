#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/IPropertyTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17D0
   TypeInfo Kind:    ClassInfo
   ClassId:          0090
   VfTable:          0000000000000000
   Address (Base):   00000001430CDD20
*/
class LayeredTransformTrack : public IPropertyTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x00B8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(LayeredTransformTrack) == 288);

}

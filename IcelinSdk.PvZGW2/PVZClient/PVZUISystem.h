#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEd/UISystemFlowEdAdapter.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BDF
   TypeInfo Kind:    ClassInfo
   ClassId:          011E
   VfTable:          0000000000000000
   Address (Base):   00000001430CF130
*/
class PVZUISystem : public UISystemFlowEdAdapter
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0B50[0xA3C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0xAF10 */

static_assert(sizeof(PVZUISystem) == 44816);

}

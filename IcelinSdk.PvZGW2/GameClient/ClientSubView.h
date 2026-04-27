#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/SubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A63
   TypeInfo Kind:    ClassInfo
   ClassId:          0112
   VfTable:          0000000000000000
   Address (Base):   0000000143102040
*/
class ClientSubView : public SubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientSubView) == 48);

}

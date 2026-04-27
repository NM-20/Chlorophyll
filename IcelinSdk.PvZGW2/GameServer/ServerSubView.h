#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/SubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CFD
   TypeInfo Kind:    ClassInfo
   ClassId:          0116
   VfTable:          0000000000000000
   Address (Base):   0000000143101EB0
*/
class ServerSubView : public SubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerSubView) == 64);

}

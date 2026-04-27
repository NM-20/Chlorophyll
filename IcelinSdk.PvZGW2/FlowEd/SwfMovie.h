#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEd/ISwfMovie.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1918
   TypeInfo Kind:    ClassInfo
   ClassId:          0064
   VfTable:          0000000000000000
   Address (Base):   000000014311EDA0
*/
class SwfMovie : public ISwfMovie
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(SwfMovie) == 40);

}

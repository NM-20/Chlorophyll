#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870518
   RuntimeId:        298F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0893
   VfTable:          000000014236DAB8
   Address (Base):   00000001430D8BD0
*/
#pragma pack(push, 8)
class EORGeneralStats : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EORStat) StatValues; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EORGeneralStats) == 24);

}

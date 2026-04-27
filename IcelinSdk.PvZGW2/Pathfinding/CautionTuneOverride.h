#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/CautionTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850818
   RuntimeId:        13BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FB
   VfTable:          000000014227C6F0
   Address (Base):   000000014310FCF0
*/
#pragma pack(push, 8)
class CautionTuneOverride : public CautionTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CautionTuneOverride) == 32);

}

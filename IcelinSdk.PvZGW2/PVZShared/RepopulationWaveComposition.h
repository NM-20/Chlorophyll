#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicWaveComposition.h>

namespace fb
{

/* TypeInfo (Array): 00000001428735A8
   RuntimeId:        2BCA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA6
   VfTable:          0000000142379248
   Address (Base):   0000000143104890
*/
#pragma pack(push, 8)
class RepopulationWaveComposition : public BasicWaveComposition
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RepopulationWaveComposition) == 40);

}

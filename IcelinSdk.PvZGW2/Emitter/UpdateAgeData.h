#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839938
   RuntimeId:        06CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D9
   VfTable:          00000001421FF8D8
   Address (Base):   00000001430DC9B0
*/
#pragma pack(push, 8)
class UpdateAgeData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Lifetime; /* 0x0030 */
  FB_FLOAT32 RandomLifetimeScale; /* 0x0034 */
  FB_FLOAT32 MaxFactor; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UpdateAgeData) == 64);

}

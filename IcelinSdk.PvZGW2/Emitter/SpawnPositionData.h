#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839858
   RuntimeId:        06C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D5
   VfTable:          00000001421FF9F8
   Address (Base):   00000001430F2220
*/
#pragma pack(push, 8)
class SpawnPositionData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ApplyScreenAspectRatio; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnPositionData) == 56);

}

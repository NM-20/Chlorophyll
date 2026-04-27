#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428397D8
   RuntimeId:        06B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BB
   VfTable:          00000001421FFA38
   Address (Base):   0000000143115D50
*/
#pragma pack(push, 8)
class SpawnPointCloudData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SpawnPointCloudData) == 48);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/GpuEmitterDocument.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A298
   RuntimeId:        0764
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0703
   VfTable:          00000001421FF258
   Address (Base):   00000001431155D0
*/
#pragma pack(push, 8)
class GpuRuntimeEmitterDocument : public GpuEmitterDocument
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GpuEmitterTemplateData) TemplateData; /* 0x0018 */
  FB_FLOAT32 StuffByPipeline; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(GpuRuntimeEmitterDocument) == 40);

}

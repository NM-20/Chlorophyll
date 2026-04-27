#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839BD8
   RuntimeId:        06F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E4
   VfTable:          00000001421FF6B8
   Address (Base):   00000001430F1A40
*/
#pragma pack(push, 8)
class UpdateRibbonFadeData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 FadeInParticleCount; /* 0x0030 */
  FB_INT32 FadeOutParticleCount; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateRibbonFadeData) == 56);

}

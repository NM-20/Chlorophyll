#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839D58
   RuntimeId:        0710
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E6
   VfTable:          00000001421FF578
   Address (Base):   00000001430F1800
*/
#pragma pack(push, 8)
class UpdateClipScaleData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT16) Lookup; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateClipScaleData) == 56);

}

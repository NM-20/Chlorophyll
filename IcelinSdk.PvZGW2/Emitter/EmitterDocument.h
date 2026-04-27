#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A178
   RuntimeId:        0752
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FF
   VfTable:          00000001421FF338
   Address (Base):   00000001430F24C0
*/
#pragma pack(push, 8)
class EmitterDocument : public EmitterAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EmitterDocument) == 24);

}

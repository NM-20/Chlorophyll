#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterDocument.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A1B8
   RuntimeId:        0756
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0701
   VfTable:          00000001421FF2D0
   Address (Base):   0000000143115690
*/
#pragma pack(push, 8)
class FlatEmitterDocument : public EmitterDocument
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EmitterTemplateData) TemplateData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FlatEmitterDocument) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/EmitterDocument.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A198
   RuntimeId:        0754
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0700
   VfTable:          00000001421FF318
   Address (Base):   00000001430FE110
*/
#pragma pack(push, 8)
class ScalableEmitterDocument : public EmitterDocument
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EmitterTemplateData) TemplateDataLow; /* 0x0018 */
  FB_HANDLE(class EmitterTemplateData) TemplateDataMedium; /* 0x0020 */
  FB_HANDLE(class EmitterTemplateData) TemplateDataHigh; /* 0x0028 */
  FB_HANDLE(class EmitterTemplateData) TemplateDataUltra; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ScalableEmitterDocument) == 56);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Emitter/EmittableField.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A118
   RuntimeId:        074C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B5
   VfTable:          00000001421FF360
   Address (Base):   00000001430B4990
*/
#pragma pack(push, 8)
class ProcessorData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EvaluatorData) Pre; /* 0x0010 */
  FB_HANDLE(class ProcessorData) NextProcessor; /* 0x0018 */
  EmittableField EvaluatorInput; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class EffectParameter) EvaluatorInputParam; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ProcessorData) == 48);

}

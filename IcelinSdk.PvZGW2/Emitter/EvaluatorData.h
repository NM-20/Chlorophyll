#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A0F8
   RuntimeId:        074A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE9
   VfTable:          00000001421FF348
   Address (Base):   00000001430B70C0
*/
#pragma pack(push, 8)
class EvaluatorData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectParameter) Parameter; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EvaluatorData) == 24);

}

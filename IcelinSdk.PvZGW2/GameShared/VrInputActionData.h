#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AxesInputActionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B420
   RuntimeId:        0F49
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED4
   VfTable:          00000001422609D8
   Address (Base):   0000000143113530
*/
#pragma pack(push, 8)
class VrInputActionData : public AxesInputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VrInputActionData) == 32);

}

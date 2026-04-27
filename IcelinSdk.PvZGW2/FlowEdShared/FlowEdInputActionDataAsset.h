#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIInputActionDataAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856AF8
   RuntimeId:        1933
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          071A
   VfTable:          00000001422CB518
   Address (Base):   000000014310D350
*/
#pragma pack(push, 8)
class FlowEdInputActionDataAsset : public UIInputActionDataAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FlowEdInputActionDataAsset) == 56);

}

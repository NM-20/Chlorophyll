#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIGraphAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856D18
   RuntimeId:        1953
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0822
   VfTable:          00000001422CB498
   Address (Base):   00000001430E8C80
*/
#pragma pack(push, 8)
class UIViewBaseAsset : public UIGraphAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIViewBaseAsset) == 88);

}

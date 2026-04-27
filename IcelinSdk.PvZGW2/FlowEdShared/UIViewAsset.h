#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIViewBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856D58
   RuntimeId:        1957
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0823
   VfTable:          00000001422CB450
   Address (Base):   00000001430FB170
*/
#pragma pack(push, 8)
class UIViewAsset : public UIViewBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIViewAsset) == 88);

}

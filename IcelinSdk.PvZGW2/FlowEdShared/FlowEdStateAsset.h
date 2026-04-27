#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIStateAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856A10
   RuntimeId:        1927
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0819
   VfTable:          00000001422CB570
   Address (Base):   000000014310D470
*/
#pragma pack(push, 8)
class FlowEdStateAsset : public UIStateAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) ActionscriptNames; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FlowEdStateAsset) == 56);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428569F0
   RuntimeId:        1925
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0647
   VfTable:          00000001422CB5A0
   Address (Base):   000000014310D4D0
*/
#pragma pack(push, 8)
class UIActionscriptLibraryAsset : public UIAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIActionscriptLibraryAsset) == 32);

}

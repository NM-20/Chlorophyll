#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/UITextureMappingCompartment.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C2C0
   RuntimeId:        1022
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0686
   VfTable:          0000000142267AC0
   Address (Base):   0000000143112930
*/
#pragma pack(push, 8)
class UITextureMappingAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UITextureMappingCompartment Compartment; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct UITextureMappingOutputEntry) Output; /* 0x0020 */
  FB_BOOLEAN DisableAtlas; /* 0x0028 */
  FB_BOOLEAN ForceAtlas; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UITextureMappingAsset) == 48);

}

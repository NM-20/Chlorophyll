#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/TextureBaseAsset.h>
#include <IcelinSdk.PvZGW2/Render/GenerateMipmapsFilterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852640
   RuntimeId:        158C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0714
   VfTable:          0000000142297818
   Address (Base):   00000001430CE6F0
*/
#pragma pack(push, 8)
class TextureAsset : public TextureBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GenerateMipmapsFilterType GenerateMipmapsFilter; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TextureAsset) == 40);

}

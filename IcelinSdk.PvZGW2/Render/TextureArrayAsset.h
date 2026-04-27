#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/TextureAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852660
   RuntimeId:        158E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0715
   VfTable:          0000000142297828
   Address (Base):   000000014310EAF0
*/
#pragma pack(push, 8)
class TextureArrayAsset : public TextureAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TextureArrayAsset) == 40);

}

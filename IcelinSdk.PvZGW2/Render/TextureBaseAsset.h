#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852620
   RuntimeId:        158A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0713
   VfTable:          000000014228DD90
   Address (Base):   00000001430EADE0
*/
#pragma pack(push, 8)
class TextureBaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF Resource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TextureBaseAsset) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428569D0
   RuntimeId:        1923
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0646
   VfTable:          00000001422CB590
   Address (Base):   00000001430DAA30
*/
#pragma pack(push, 8)
class UIAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF SwfMovieResource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIAsset) == 32);

}

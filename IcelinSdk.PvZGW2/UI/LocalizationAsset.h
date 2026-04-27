#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854F40
   RuntimeId:        17EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0665
   VfTable:          00000001422B83C8
   Address (Base):   00000001430FB3B0
*/
#pragma pack(push, 8)
class LocalizationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UITextDatabase) LocalizedTexts; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LocalizationAsset) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/LocalizationAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857208
   RuntimeId:        199D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0666
   VfTable:          00000001422CB920
   Address (Base):   00000001430FA8D0
*/
#pragma pack(push, 8)
class FsLocalizationAsset : public LocalizationAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FsLocalizationAsset) == 32);

}

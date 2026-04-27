#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861808
   RuntimeId:        1FA7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BF
   VfTable:          0000000142344350
   Address (Base):   00000001431097B0
*/
#pragma pack(push, 8)
class EditorialAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EditorialAsset) == 24);

}

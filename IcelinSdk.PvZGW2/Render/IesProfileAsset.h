#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852960
   RuntimeId:        15BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0662
   VfTable:          0000000142297780
   Address (Base):   000000014310E7F0
*/
#pragma pack(push, 8)
class IesProfileAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF SourceResource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IesProfileAsset) == 32);

}

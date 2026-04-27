#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862240
   RuntimeId:        2034
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0707
   VfTable:          0000000142343F28
   Address (Base):   0000000143108B50
*/
#pragma pack(push, 8)
class PersistedLicenseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PersistedLicenseAsset) == 24);

}

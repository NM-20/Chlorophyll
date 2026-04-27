#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858398
   RuntimeId:        1A2F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0704
   VfTable:          00000001422D59C0
   Address (Base):   000000014310CC90
*/
#pragma pack(push, 8)
class LicenseConfiguration : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct LicenseInfo) Licenses; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LicenseConfiguration) == 32);

}

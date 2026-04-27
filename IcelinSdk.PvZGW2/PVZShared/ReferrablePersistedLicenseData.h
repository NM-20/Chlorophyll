#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PersistedLicenseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428621A0
   RuntimeId:        202A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          111A
   VfTable:          0000000142343F38
   Address (Base):   0000000143108C10
*/
#pragma pack(push, 8)
class ReferrablePersistedLicenseData : public PersistedLicenseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ReferrablePersistedLicenseData) == 16);

}

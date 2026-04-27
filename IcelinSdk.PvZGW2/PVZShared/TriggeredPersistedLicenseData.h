#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PersistedLicenseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428621C0
   RuntimeId:        202C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          111B
   VfTable:          0000000142343F48
   Address (Base):   0000000143108BB0
*/
#pragma pack(push, 8)
class TriggeredPersistedLicenseData : public PersistedLicenseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TriggeredPersistedLicenseData) == 16);

}

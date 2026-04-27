#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862180
   RuntimeId:        2028
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1119
   VfTable:          0000000142343F08
   Address (Base):   00000001430E8500
*/
#pragma pack(push, 8)
class PersistedLicenseData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PersistedLicenseData) == 16);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858BE8
   RuntimeId:        1A85
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1118
   VfTable:          00000001422D5718
   Address (Base):   000000014310CAB0
*/
#pragma pack(push, 8)
class Ps3ParentalLockAgeSettingsOverrides : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Ps3ParentalLockAgeSettingsForCountry) Overrides; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Ps3ParentalLockAgeSettingsOverrides) == 24);

}

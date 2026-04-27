#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/ProviderEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        01D6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          034B
   VfTable:          0000000000000000
   Address (Base):   0000000143141F90
*/
class FloatProviderEntity : public ProviderEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(FloatProviderEntity) == 64);

}

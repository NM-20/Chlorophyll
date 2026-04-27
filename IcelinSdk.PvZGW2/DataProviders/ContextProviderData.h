#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834578
   RuntimeId:        01E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A0E
   VfTable:          00000001421ECEE0
   Address (Base):   0000000143100D50
*/
#pragma pack(push, 8)
class ContextProviderData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ContextProviderData) == 24);

}

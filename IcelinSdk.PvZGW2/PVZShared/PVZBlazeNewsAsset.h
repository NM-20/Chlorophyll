#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F0C8
   RuntimeId:        28C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07AB
   VfTable:          000000014236E440
   Address (Base):   0000000143105550
*/
#pragma pack(push, 8)
class PVZBlazeNewsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeNewsAsset) == 24);

}

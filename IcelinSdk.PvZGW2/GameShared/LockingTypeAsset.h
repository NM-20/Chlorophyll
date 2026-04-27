#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AFD8
   RuntimeId:        0F11
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B8
   VfTable:          0000000142261980
   Address (Base):   0000000143113890
*/
#pragma pack(push, 8)
class LockingTypeAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LockingTypeAsset) == 24);

}

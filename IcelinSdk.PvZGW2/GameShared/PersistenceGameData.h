#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A088
   RuntimeId:        0E3E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0671
   VfTable:          000000014225F5A8
   Address (Base):   0000000143114010
*/
#pragma pack(push, 8)
class PersistenceGameData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class Asset) Assets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PersistenceGameData) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A0E8
   RuntimeId:        0E44
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A5
   VfTable:          000000014225F588
   Address (Base):   00000001430FD630
*/
#pragma pack(push, 8)
class AbstractPersistenceData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AbstractPersistenceData) == 24);

}

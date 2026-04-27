#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B6E8
   RuntimeId:        0F73
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F2
   VfTable:          00000001422688A0
   Address (Base):   0000000143113410
*/
#pragma pack(push, 8)
class ExtraSpawnData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ExtraSpawnData) == 16);

}

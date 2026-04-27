#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A7E0
   RuntimeId:        0EAC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0A
   VfTable:          00000001422643F0
   Address (Base):   00000001430ED600
*/
#pragma pack(push, 16)
class DynamicModelHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(DynamicModelHealthComponentData) == 112);

}

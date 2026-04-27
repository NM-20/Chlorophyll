#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428696A8
   RuntimeId:        24B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D12
   VfTable:          0000000142355B50
   Address (Base):   00000001430E5020
*/
#pragma pack(push, 16)
class ObjectProjectileHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ObjectProjectileHealthComponentData) == 112);

}

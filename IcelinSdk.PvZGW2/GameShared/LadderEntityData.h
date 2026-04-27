#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/StaticModelEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B930
   RuntimeId:        0F90
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2E
   VfTable:          0000000142268668
   Address (Base):   00000001430D6970
*/
#pragma pack(push, 16)
class LadderEntityData : public StaticModelEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(LadderEntityData) == 240);

}

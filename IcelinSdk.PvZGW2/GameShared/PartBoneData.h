#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E048
   RuntimeId:        11B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B97
   VfTable:          0000000142273550
   Address (Base):   00000001431116D0
*/
#pragma pack(push, 16)
class PartBoneData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN IsTransformInputLocal; /* 0x0018 */
  char pad_0019[0x0007];
  LinearTransform Transform; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PartBoneData) == 96);

}

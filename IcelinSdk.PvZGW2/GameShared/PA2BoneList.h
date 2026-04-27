#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849CE8
   RuntimeId:        0E08
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E03
   VfTable:          000000014225F718
   Address (Base):   00000001431143D0
*/
#pragma pack(push, 8)
class PA2BoneList : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PA2Bone) Bones; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PA2BoneList) == 24);

}

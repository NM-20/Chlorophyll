#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849CC8
   RuntimeId:        0E06
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCD
   VfTable:          000000014225F6F8
   Address (Base):   0000000143114430
*/
#pragma pack(push, 8)
class PA2Bone : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Bone; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PA2Bone) == 24);

}

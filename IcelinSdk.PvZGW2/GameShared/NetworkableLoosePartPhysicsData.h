#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/LoosePartPhysicsData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DFC8
   RuntimeId:        11A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E43
   VfTable:          0000000142273588
   Address (Base):   0000000143111790
*/
#pragma pack(push, 8)
class NetworkableLoosePartPhysicsData : public LoosePartPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Networked; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NetworkableLoosePartPhysicsData) == 32);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AA20
   RuntimeId:        0EC3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087F
   VfTable:          0000000142263A80
   Address (Base):   00000001430DC170
*/
#pragma pack(push, 8)
class PlayAnimationData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Controller; /* 0x0010 */
  FB_BOOLEAN Looping; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PlayAnimationData) == 40);

}

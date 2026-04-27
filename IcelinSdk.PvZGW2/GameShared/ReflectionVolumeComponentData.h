#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ED80
   RuntimeId:        125B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2F
   VfTable:          0000000142274940
   Address (Base):   00000001430EC280
*/
#pragma pack(push, 16)
class ReflectionVolumeComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ReflectionVolumeComponentData) == 112);

}

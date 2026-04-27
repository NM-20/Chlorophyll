#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ED60
   RuntimeId:        1259
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2E
   VfTable:          00000001422749D0
   Address (Base):   00000001430EC220
*/
#pragma pack(push, 16)
class LightComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LocalLightEntityData) Light; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LightComponentData) == 128);

}

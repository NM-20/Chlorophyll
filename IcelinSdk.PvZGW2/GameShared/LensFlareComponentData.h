#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EDE0
   RuntimeId:        1261
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D94
   VfTable:          00000001422748C0
   Address (Base):   00000001430EC100
*/
#pragma pack(push, 16)
class LensFlareComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LensFlareEntityData) LensFlare; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LensFlareComponentData) == 128);

}

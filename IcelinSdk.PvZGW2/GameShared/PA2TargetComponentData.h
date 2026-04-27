#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849D28
   RuntimeId:        0E0C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB1
   VfTable:          000000014225F6A8
   Address (Base):   00000001430DC3B0
*/
#pragma pack(push, 16)
class PA2TargetComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PA2TargetProperties) TargetProperties; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PA2TargetComponentData) == 128);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142847C78
   RuntimeId:        0CE4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D95
   VfTable:          0000000142252A88
   Address (Base):   00000001430EE920
*/
#pragma pack(push, 16)
class BangerHealthModuleData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Health; /* 0x0070 */
  MaterialDecl MaterialPair; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(BangerHealthModuleData) == 128);

}

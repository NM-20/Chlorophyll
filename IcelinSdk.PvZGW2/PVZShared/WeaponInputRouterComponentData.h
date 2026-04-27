#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B5B0
   RuntimeId:        262E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBC
   VfTable:          000000014235AB58
   Address (Base):   00000001430D3790
*/
#pragma pack(push, 16)
class WeaponInputRouterComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxFireRate; /* 0x0070 */
  FB_UINT32 RotationCount; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(WeaponInputRouterComponentData) == 128);

}

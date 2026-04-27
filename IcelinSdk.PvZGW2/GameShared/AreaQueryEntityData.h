#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849780
   RuntimeId:        0DB8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A36
   VfTable:          000000014225FC70
   Address (Base):   00000001430EE3E0
*/
#pragma pack(push, 16)
class AreaQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform GeometryTransform; /* 0x0020 */
  FB_FLOAT32 Radius; /* 0x0060 */
  FB_BOOLEAN Enabled; /* 0x0064 */
  FB_BOOLEAN UseCharacterEntity; /* 0x0065 */
  FB_BOOLEAN UseRadiusWithGeometryTransform; /* 0x0066 */
  FB_BOOLEAN QueryUsingExtraPlayerInDoublePlayerEvent; /* 0x0067 */
  FB_BOOLEAN OnlyQueryIfOnDifferentTeams; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AreaQueryEntityData) == 112);

}

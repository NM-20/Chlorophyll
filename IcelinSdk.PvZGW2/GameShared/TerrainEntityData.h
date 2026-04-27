#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BA50
   RuntimeId:        0FA2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B23
   VfTable:          0000000142268470
   Address (Base):   00000001430D6850
*/
#pragma pack(push, 16)
class TerrainEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF DecalsResource; /* 0x0090 */
  FB_HANDLE(class TerrainData) TerrainAsset; /* 0x0098 */
  MaterialDecl WaterMaterial; /* 0x00A0 */
  FB_BOOLEAN Visible; /* 0x00A4 */
  FB_BOOLEAN FreeStreamingAllowed; /* 0x00A5 */
  char pad_00A6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(TerrainEntityData) == 176);

}

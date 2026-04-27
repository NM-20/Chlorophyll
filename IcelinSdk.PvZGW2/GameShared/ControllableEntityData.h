#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AB00
   RuntimeId:        0ED1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B25
   VfTable:          0000000142263638
   Address (Base):   00000001430C0070
*/
#pragma pack(push, 16)
class ControllableEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId DefaultTeam; /* 0x0090 */
  FB_FLOAT32 LowHealthThreshold; /* 0x0094 */
  MaterialDecl MaterialPair; /* 0x0098 */
  char pad_009C[0x0004];
  FB_STDARRAY(FB_INT32) SuppressedInputs; /* 0x00A0 */
  FB_BOOLEAN UsePrediction; /* 0x00A8 */
  FB_BOOLEAN ResetTeamOnLastPlayerExits; /* 0x00A9 */
  FB_BOOLEAN Immortal; /* 0x00AA */
  FB_BOOLEAN FakeImmortal; /* 0x00AB */
  FB_BOOLEAN ForceForegroundRendering; /* 0x00AC */
  char pad_00AD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(ControllableEntityData) == 176);

}

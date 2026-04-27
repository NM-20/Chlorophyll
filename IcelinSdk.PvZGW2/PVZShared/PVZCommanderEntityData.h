#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863308
   RuntimeId:        210E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2F
   VfTable:          00000001423539C8
   Address (Base):   00000001430D4C30
*/
#pragma pack(push, 16)
class PVZCommanderEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StaticCameraElevation; /* 0x0080 */
  TeamId Team; /* 0x0084 */
  FB_STDARRAY(enum PVZCommanderActionType) GlobalActions; /* 0x0088 */
  FB_UINT32 InitialSundropAmount; /* 0x0090 */
  FB_UINT32 SundropAmount; /* 0x0094 */
  FB_FLOAT32 SundropFrequency; /* 0x0098 */
  char pad_009C[0x0004];
  FB_CSTRING TeamIdentifier; /* 0x00A0 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderEntityData) == 176);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D540
   RuntimeId:        111D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C53
   VfTable:          0000000142274100
   Address (Base):   00000001430EC580
*/
#pragma pack(push, 8)
class WriteAntGameStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WriteAntGameStateData) AntGameStates; /* 0x0018 */
  FB_INT32 NumProperties; /* 0x0020 */
  FB_INT32 NumAntAssets; /* 0x0024 */
  FB_BOOLEAN StartWritingContinouslyOnSpawn; /* 0x0028 */
  FB_BOOLEAN WriteOnceOnSpawn; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WriteAntGameStateEntityData) == 48);

}

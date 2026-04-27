#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D520
   RuntimeId:        111B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BED
   VfTable:          0000000142274138
   Address (Base):   00000001430EC5E0
*/
#pragma pack(push, 8)
class ReadAntGameStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ReadAntGameStateData) AntGameStates; /* 0x0018 */
  FB_INT32 NumProperties; /* 0x0020 */
  FB_INT32 NumAntAssets; /* 0x0024 */
  FB_BOOLEAN StartReadingContinouslyOnSpawn; /* 0x0028 */
  FB_BOOLEAN ReadOnceOnSpawn; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ReadAntGameStateEntityData) == 48);

}

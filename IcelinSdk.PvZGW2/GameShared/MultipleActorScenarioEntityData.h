#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849C28
   RuntimeId:        0DFC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4A
   VfTable:          000000014225F798
   Address (Base):   00000001430D7A50
*/
#pragma pack(push, 16)
class MultipleActorScenarioEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform WorldSpaceConnectTransform; /* 0x0060 */
  AntRef ScenarioAntRef; /* 0x00A0 */
  FB_INT32 LevelChoice; /* 0x00B4 */
  FB_INT32 ScenarioChoice; /* 0x00B8 */
  FB_INT32 Actor1; /* 0x00BC */
  FB_INT32 Actor1Part; /* 0x00C0 */
  FB_INT32 Actor1SecondPart; /* 0x00C4 */
  FB_INT32 Actor2; /* 0x00C8 */
  FB_INT32 Actor2Part; /* 0x00CC */
  FB_INT32 Actor2SecondPart; /* 0x00D0 */
  FB_INT32 Actor3; /* 0x00D4 */
  FB_INT32 Actor3Part; /* 0x00D8 */
  FB_INT32 Actor3SecondPart; /* 0x00DC */
  FB_INT32 Actor4; /* 0x00E0 */
  FB_INT32 Actor4Part; /* 0x00E4 */
  FB_INT32 Actor4SecondPart; /* 0x00E8 */
  FB_INT32 Actor5; /* 0x00EC */
  FB_INT32 Actor5Part; /* 0x00F0 */
  FB_INT32 Actor5SecondPart; /* 0x00F4 */
  FB_INT32 Actor6; /* 0x00F8 */
  FB_INT32 Actor6Part; /* 0x00FC */
  FB_INT32 Actor6SecondPart; /* 0x0100 */
  FB_FLOAT32 ExternalTime; /* 0x0104 */
  Realm Realm; /* 0x0108 */
  FB_BOOLEAN WorldSpace; /* 0x010C */
  FB_BOOLEAN AligningEnabled; /* 0x010D */
  FB_BOOLEAN UseInputEventPlayerAsPlayer1; /* 0x010E */
  FB_BOOLEAN ScenarioActive; /* 0x010F */
  FB_BOOLEAN Actor1Prepared; /* 0x0110 */
  FB_BOOLEAN Actor2Prepared; /* 0x0111 */
  FB_BOOLEAN Actor3Prepared; /* 0x0112 */
  FB_BOOLEAN Actor4Prepared; /* 0x0113 */
  FB_BOOLEAN Actor5Prepared; /* 0x0114 */
  FB_BOOLEAN Actor6Prepared; /* 0x0115 */
  FB_BOOLEAN CheckActor1Finished; /* 0x0116 */
  FB_BOOLEAN CheckActor2Finished; /* 0x0117 */
  FB_BOOLEAN CheckActor3Finished; /* 0x0118 */
  FB_BOOLEAN CheckActor4Finished; /* 0x0119 */
  FB_BOOLEAN CheckActor5Finished; /* 0x011A */
  FB_BOOLEAN CheckActor6Finished; /* 0x011B */
  FB_BOOLEAN UseExternalTime; /* 0x011C */
  char pad_011D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(MultipleActorScenarioEntityData) == 288);

}

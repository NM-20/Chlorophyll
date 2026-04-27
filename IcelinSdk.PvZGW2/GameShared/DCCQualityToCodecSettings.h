#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CutsceneQualityLevel.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F158
   RuntimeId:        1291
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8D68
   Default Value:    000000014284F170
*/
#pragma pack(push, 4)
struct DCCQualityToCodecSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  CutsceneQualityLevel QualityLevel; /* 0x0000 */
  AntRef CodecSetting; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DCCQualityToCodecSettings) == 24);

}

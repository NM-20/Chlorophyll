#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/MorphTargetGender.h>
#include <IcelinSdk.PvZGW2/Morph/MorphTargetRace.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FEA8
   RuntimeId:        1355
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8B08
   Default Value:    0000000142BA4898
*/
#pragma pack(push, 4)
struct MorphConfigEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  MorphTargetGender Gender; /* 0x0000 */
  MorphTargetRace Race; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MorphConfigEntry) == 8);

}

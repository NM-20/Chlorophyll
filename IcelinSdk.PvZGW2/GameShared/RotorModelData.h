#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CB28
   RuntimeId:        1094
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAF60
   Default Value:    000000014284CB40
*/
#pragma pack(push, 4)
struct RotorModelData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 RotationRpm; /* 0x0000 */
  FB_UINT32 PartIndex; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(RotorModelData) == 8);

}

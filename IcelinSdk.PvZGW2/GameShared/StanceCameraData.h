#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CC48
   RuntimeId:        10A4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAF20
   Default Value:    000000014284CC60
*/
#pragma pack(push, 8)
struct StanceCameraData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) ValidStances; /* 0x0000 */
  FB_STDARRAY(FB_INT32) DefaultCameraForStances; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StanceCameraData) == 16);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836510
   RuntimeId:        03CD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD2A8
   Default Value:    0000000142B88C18
*/
#pragma pack(push, 8)
struct SoundDataReference
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class DataContainer) DataOwner; /* 0x0000 */
  FB_HANDLE(class SoundDataAsset) SoundData; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundDataReference) == 16);

}

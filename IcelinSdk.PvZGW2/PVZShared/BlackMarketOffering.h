#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871668
   RuntimeId:        2A6D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C17A8
   Default Value:    0000000142871680
*/
#pragma pack(push, 8)
struct BlackMarketOffering
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING OfferingId; /* 0x0000 */
  FB_CSTRING CardName; /* 0x0008 */
  FB_CSTRING ItemImage; /* 0x0010 */
  FB_CSTRING ItemCategory; /* 0x0018 */
  FB_UINT32 RarenessLevel; /* 0x0020 */
  FB_INT32 Quantity; /* 0x0024 */
  FB_INT32 ItemType; /* 0x0028 */
  FB_INT32 Cost; /* 0x002C */
  FB_CSTRING CardDescription; /* 0x0030 */
  FB_BOOLEAN IsPuzzlePiece; /* 0x0038 */
  FB_BOOLEAN IsSpecialConsumable; /* 0x0039 */
  FB_BOOLEAN Owned; /* 0x003A */
  char pad_003B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BlackMarketOffering) == 64);

}

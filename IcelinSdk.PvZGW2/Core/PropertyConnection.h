#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428334F0
   RuntimeId:        010B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD588
   Default Value:    0000000142B7DF20
*/
#pragma pack(push, 8)
struct PropertyConnection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class DataContainer) Source; /* 0x0000 */
  FB_HANDLE(class DataContainer) Target; /* 0x0008 */
  FB_INT32 SourceFieldId; /* 0x0010 */
  FB_INT32 TargetFieldId; /* 0x0014 */
  FB_UINT32 Flags; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PropertyConnection) == 32);

}

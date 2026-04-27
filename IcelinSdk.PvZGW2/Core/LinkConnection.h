#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833510
   RuntimeId:        010D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD568
   Default Value:    0000000142B7DF40
*/
#pragma pack(push, 8)
struct LinkConnection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class DataContainer) Source; /* 0x0000 */
  FB_HANDLE(class DataContainer) Target; /* 0x0008 */
  FB_INT32 SourceFieldId; /* 0x0010 */
  FB_INT32 TargetFieldId; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LinkConnection) == 24);

}

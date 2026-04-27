#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/FieldAccessType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833550
   RuntimeId:        0111
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD548
   Default Value:    0000000142833568
*/
#pragma pack(push, 8)
struct DataField
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Value; /* 0x0000 */
  FB_HANDLE(class DataContainer) ValueRef; /* 0x0008 */
  FB_INT32 Id; /* 0x0010 */
  FieldAccessType AccessType; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DataField) == 24);

}

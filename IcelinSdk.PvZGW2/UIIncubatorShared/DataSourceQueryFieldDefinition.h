#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876B98
   RuntimeId:        2E19
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C04C8
   Default Value:    0000000142876BB0
*/
#pragma pack(push, 8)
struct DataSourceQueryFieldDefinition
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_UINT32 TypeNameHash; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING EditorPropertyType; /* 0x0010 */
  FB_BOOLEAN IsArray; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DataSourceQueryFieldDefinition) == 32);

}

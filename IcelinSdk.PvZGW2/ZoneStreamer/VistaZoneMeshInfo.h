#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428771B0
   RuntimeId:        2E69
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0448
   Default Value:    0000000142BB6720
*/
#pragma pack(push, 16)
struct VistaZoneMeshInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0000 */
  FB_HANDLE(class ObjectBlueprint) Object; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VistaZoneMeshInfo) == 80);

}

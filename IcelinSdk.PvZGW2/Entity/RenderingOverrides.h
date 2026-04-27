#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/RenderingOverride.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B558
   RuntimeId:        08CC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB840
   Default Value:    000000014283B570
*/
#pragma pack(push, 4)
struct RenderingOverrides
{
  typedef struct ValueTypeInfo TypeInfo_t;

  RenderingOverride ShadowEnable; /* 0x0000 */
  RenderingOverride DynamicReflectionEnable; /* 0x0004 */
  RenderingOverride StaticReflectionEnable; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(RenderingOverrides) == 12);

}

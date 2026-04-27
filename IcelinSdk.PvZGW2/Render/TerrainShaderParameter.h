#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/TerrainShaderParameterDataType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853670
   RuntimeId:        1682
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7FC8
   Default Value:    0000000142853688
*/
#pragma pack(push, 8)
struct TerrainShaderParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 ParameterHandle; /* 0x0000 */
  TerrainShaderParameterDataType ParameterType; /* 0x0004 */
  FB_CSTRING ParameterName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TerrainShaderParameter) == 16);

}

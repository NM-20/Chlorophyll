#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E528
   RuntimeId:        11EF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8F08
   Default Value:    000000014284E540
*/
#pragma pack(push, 16)
struct ShaderParameterVector
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 Value; /* 0x0000 */
  FB_CSTRING ParameterName; /* 0x0010 */
  char pad_0018[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ShaderParameterVector) == 32);

}

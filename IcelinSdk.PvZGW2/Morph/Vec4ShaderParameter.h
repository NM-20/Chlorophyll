#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameter.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FB38
   RuntimeId:        1327
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EEE
   VfTable:          0000000142277170
   Address (Base):   00000001430FC7F0
*/
#pragma pack(push, 16)
class Vec4ShaderParameter : public ShaderParameter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec4 Value; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(Vec4ShaderParameter) == 48);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FB18
   RuntimeId:        1325
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EEC
   VfTable:          00000001422771A0
   Address (Base):   00000001430EB980
*/
#pragma pack(push, 8)
class ShaderParameter : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ParameterName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ShaderParameter) == 24);

}

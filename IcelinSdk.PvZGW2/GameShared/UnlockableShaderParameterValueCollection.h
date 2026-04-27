#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E9C8
   RuntimeId:        1231
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0882
   VfTable:          0000000142272D30
   Address (Base):   0000000143111250
*/
#pragma pack(push, 8)
class UnlockableShaderParameterValueCollection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ShaderParameterName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockableShaderParameterValueCollection) == 24);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Entity/EffectParameterType.h>
#include <IcelinSdk.PvZGW2/Entity/EffectParameterScopeType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A428
   RuntimeId:        07BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E57
   VfTable:          000000014220C4F0
   Address (Base):   0000000143115570
*/
#pragma pack(push, 8)
class EffectParameter : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  EffectParameterType ParamType; /* 0x0018 */
  EffectParameterScopeType ParamScope; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EffectParameter) == 32);

}

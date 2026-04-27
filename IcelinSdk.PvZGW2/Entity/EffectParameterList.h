#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A448
   RuntimeId:        07BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C0
   VfTable:          000000014220C4E0
   Address (Base):   0000000143115510
*/
#pragma pack(push, 8)
class EffectParameterList : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class EffectParameter) Parameters; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EffectParameterList) == 32);

}

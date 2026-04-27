#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428762E8
   RuntimeId:        2D9E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0626
   VfTable:          00000001423934A0
   Address (Base):   00000001430CFA20
*/
#pragma pack(push, 8)
class ConfigListAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ConfigListAsset) == 24);

}

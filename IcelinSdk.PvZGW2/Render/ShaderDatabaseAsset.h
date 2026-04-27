#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428531C0
   RuntimeId:        1640
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0820
   VfTable:          00000001422A1410
   Address (Base):   000000014310E550
*/
#pragma pack(push, 8)
class ShaderDatabaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ShaderDatabaseAsset) == 24);

}

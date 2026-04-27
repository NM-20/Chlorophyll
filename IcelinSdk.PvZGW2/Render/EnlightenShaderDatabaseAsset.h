#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852900
   RuntimeId:        15B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063E
   VfTable:          00000001422977A0
   Address (Base):   000000014310E850
*/
#pragma pack(push, 8)
class EnlightenShaderDatabaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NumShaders; /* 0x0018 */
  char pad_001C[0x0004];
  FB_RESOURCEREF DatabaseResource; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EnlightenShaderDatabaseAsset) == 40);

}

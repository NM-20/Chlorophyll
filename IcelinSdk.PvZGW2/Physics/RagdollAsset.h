#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 00000001428518C8
   RuntimeId:        14B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0826
   VfTable:          000000014227F2F0
   Address (Base):   000000014310EF70
*/
#pragma pack(push, 8)
class RagdollAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MaterialDecl MaterialPair; /* 0x0018 */
  char pad_001C[0x0004];
  FB_RESOURCEREF Resource; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RagdollAsset) == 40);

}

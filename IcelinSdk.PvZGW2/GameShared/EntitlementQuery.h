#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A8C0
   RuntimeId:        0EB6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          071B
   VfTable:          0000000142264100
   Address (Base):   0000000143113B30
*/
#pragma pack(push, 8)
class EntitlementQuery : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EntitlementData) EntitlementsData; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) GroupNames; /* 0x0020 */
  GamePlatform Platform; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING EntitlementTag; /* 0x0030 */
  FB_CSTRING ProductId; /* 0x0038 */
  FB_CSTRING ProjectId; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(EntitlementQuery) == 72);

}

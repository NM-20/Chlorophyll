#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852D50
   RuntimeId:        15FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06EB
   VfTable:          00000001422A1748
   Address (Base):   00000001430FB770
*/
#pragma pack(push, 8)
class MeshVariationDatabase : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct MeshVariationDatabaseEntry) Entries; /* 0x0018 */
  FB_STDARRAY(struct MeshVariationDatabaseRedirectEntry) RedirectEntries; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MeshVariationDatabase) == 40);

}

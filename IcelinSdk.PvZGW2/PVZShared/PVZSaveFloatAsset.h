#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSaveBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F278
   RuntimeId:        28DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07DA
   VfTable:          000000014236E2B0
   Address (Base):   00000001430D8930
*/
#pragma pack(push, 8)
class PVZSaveFloatAsset : public PVZSaveBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZSaveTypeFloat) PVZFloatSaves; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveFloatAsset) == 40);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSaveBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F2C8
   RuntimeId:        28E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D9
   VfTable:          000000014236E290
   Address (Base):   00000001430D88D0
*/
#pragma pack(push, 8)
class PVZSaveUIntAsset : public PVZSaveBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZSaveTypeUInt) PVZUintSaves; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveUIntAsset) == 40);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSaveDataSource.h>

namespace fb
{

/* TypeInfo (Array): 00000001428651A0
   RuntimeId:        2293
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE2
   VfTable:          0000000142351840
   Address (Base):   00000001430E5260
*/
#pragma pack(push, 8)
class PVZSaveSetValueEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZSaveDataSource PVZSaveDataSource; /* 0x0018 */
  FB_CSTRING UniqueKey; /* 0x0028 */
  FB_FLOAT32 PVZSaveFloat; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING PVZSaveString; /* 0x0038 */
  FB_UINT32 PVZSaveUInt; /* 0x0040 */
  FB_INT32 PVZSaveInt; /* 0x0044 */
  FB_BOOLEAN PVZSaveBool; /* 0x0048 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0049 */
  char pad_004A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveSetValueEntityData) == 80);

}

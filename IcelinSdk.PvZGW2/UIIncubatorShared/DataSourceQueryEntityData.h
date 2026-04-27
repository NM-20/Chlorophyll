#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876BD8
   RuntimeId:        2E1B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C4
   VfTable:          0000000142392DB0
   Address (Base):   00000001430E08E0
*/
#pragma pack(push, 8)
class DataSourceQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class DataContainer) InData; /* 0x0020 */
  FB_INT32 ArrayIndex; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DataSourceQueryEntityData) == 48);

}

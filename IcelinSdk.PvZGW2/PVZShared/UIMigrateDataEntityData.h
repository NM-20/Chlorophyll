#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870B80
   RuntimeId:        29EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C61
   VfTable:          000000014236D2A8
   Address (Base):   00000001430E39A0
*/
#pragma pack(push, 8)
class UIMigrateDataEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MetaData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIMigrateDataEntityData) == 32);

}

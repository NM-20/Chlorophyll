#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865388
   RuntimeId:        22AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F5
   VfTable:          0000000142351808
   Address (Base):   00000001430E7420
*/
#pragma pack(push, 8)
class PVZStatQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StatQueryInfo) Stats; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) StatCodes; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZStatQueryEntityData) == 40);

}

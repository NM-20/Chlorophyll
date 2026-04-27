#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428710B0
   RuntimeId:        2A2B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C39
   VfTable:          000000014236CC28
   Address (Base):   00000001430E30A0
*/
#pragma pack(push, 8)
class UIStatsQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZUIStatQuery) Statistics; /* 0x0018 */
  FB_CSTRING ParamX; /* 0x0020 */
  FB_CSTRING ParamY; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIStatsQueryEntityData) == 48);

}

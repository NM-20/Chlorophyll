#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEventCast.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864F38
   RuntimeId:        2270
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0996
   VfTable:          0000000142351D20
   Address (Base):   00000001430E70C0
*/
#pragma pack(push, 8)
class StatEventTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StatEvent StatEvent; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ParamX; /* 0x0020 */
  FB_CSTRING ParamY; /* 0x0028 */
  FB_HANDLE(class StatsCategoryBaseData) ParamXRef; /* 0x0030 */
  FB_HANDLE(class StatsCategoryBaseData) ParamYRef; /* 0x0038 */
  FB_FLOAT32 Value; /* 0x0040 */
  StatEventCast SendTo; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatEventTriggerEntityData) == 72);

}

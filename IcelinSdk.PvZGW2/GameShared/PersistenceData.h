#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AbstractPersistenceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849F58
   RuntimeId:        0E2C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A6
   VfTable:          000000014225F608
   Address (Base):   00000001430FD6F0
*/
#pragma pack(push, 8)
class PersistenceData : public AbstractPersistenceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING PersistenceName; /* 0x0018 */
  FB_CSTRING ClubPersistenceName; /* 0x0020 */
  FB_STDARRAY(struct PersistentValueTemplateData) Values; /* 0x0028 */
  FB_HANDLE(class PersistenceStatGroup) ServerDefaultGroup; /* 0x0030 */
  FB_HANDLE(class PersistenceStatGroup) ClientDefaultGroup; /* 0x0038 */
  FB_HANDLE(class PersistenceRetentionPolicy) RetentionPolicy; /* 0x0040 */
  FB_STDARRAY(struct PersistenceConsumableMapping) ConsumableMappings; /* 0x0048 */
  FB_BOOLEAN DeltaGameReports; /* 0x0050 */
  FB_BOOLEAN HistoryDaily; /* 0x0051 */
  FB_BOOLEAN HistoryWeekly; /* 0x0052 */
  FB_BOOLEAN HistoryMonthly; /* 0x0053 */
  FB_BOOLEAN OutputProperties; /* 0x0054 */
  char pad_0055[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PersistenceData) == 88);

}

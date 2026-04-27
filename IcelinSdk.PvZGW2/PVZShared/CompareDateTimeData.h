#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865260
   RuntimeId:        229F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9E
   VfTable:          00000001423518E8
   Address (Base):   00000001430E7840
*/
#pragma pack(push, 8)
class CompareDateTimeData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING SavedTime; /* 0x0020 */
  FB_INT32 CompareTimeSec; /* 0x0028 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x002C */
  FB_BOOLEAN CompareTimeSecIsAbsolute; /* 0x002D */
  FB_BOOLEAN UseUnixTime; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CompareDateTimeData) == 48);

}

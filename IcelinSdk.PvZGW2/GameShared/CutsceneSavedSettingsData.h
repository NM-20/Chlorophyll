#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineExtraData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F1D0
   RuntimeId:        1297
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08EF
   VfTable:          00000001422769A0
   Address (Base):   0000000143110D70
*/
#pragma pack(push, 8)
class CutsceneSavedSettingsData : public TimelineExtraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CutsceneSavedSettingsData) == 16);

}

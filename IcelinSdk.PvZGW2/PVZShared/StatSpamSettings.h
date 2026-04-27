#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428622D0
   RuntimeId:        203C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0640
   VfTable:          0000000142343EA0
   Address (Base):   0000000143108AF0
*/
#pragma pack(push, 8)
class StatSpamSettings : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StatSpamSetting) SpamList; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StatSpamSettings) == 32);

}

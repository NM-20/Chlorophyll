#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A398
   RuntimeId:        0E6A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C9
   VfTable:          000000014225F3F0
   Address (Base):   00000001430D75D0
*/
#pragma pack(push, 8)
class ProfileOptionDataEnum : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ProfileOptionDataEnumItem) Items; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataEnum) == 48);

}

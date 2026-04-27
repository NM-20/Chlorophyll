#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A3B8
   RuntimeId:        0E6C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CA
   VfTable:          000000014225F400
   Address (Base):   00000001430D7570
*/
#pragma pack(push, 8)
class ProfileOptionDataBool : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Value; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataBool) == 48);

}

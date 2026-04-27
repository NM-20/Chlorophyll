#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A3F8
   RuntimeId:        0E70
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C8
   VfTable:          000000014225F3B8
   Address (Base):   00000001430FD270
*/
#pragma pack(push, 8)
class ProfileOptionDataBinary : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 MaxLength; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataBinary) == 48);

}

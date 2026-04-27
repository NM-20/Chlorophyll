#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A3D8
   RuntimeId:        0E6E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C7
   VfTable:          000000014225F3C8
   Address (Base):   00000001430D7510
*/
#pragma pack(push, 8)
class ProfileOptionDataString : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 MaxLength; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING Value; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataString) == 56);

}

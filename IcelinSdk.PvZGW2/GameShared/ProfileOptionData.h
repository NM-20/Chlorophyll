#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionsType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A308
   RuntimeId:        0E62
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C5
   VfTable:          000000014225F420
   Address (Base):   00000001430CE930
*/
#pragma pack(push, 8)
class ProfileOptionData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING UniqueId; /* 0x0018 */
  ProfileOptionsType Category; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionData) == 40);

}

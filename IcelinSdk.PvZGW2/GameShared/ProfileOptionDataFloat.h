#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A348
   RuntimeId:        0E66
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C6
   VfTable:          000000014225F430
   Address (Base):   00000001430D7630
*/
#pragma pack(push, 8)
class ProfileOptionDataFloat : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Min; /* 0x0028 */
  FB_FLOAT32 Max; /* 0x002C */
  FB_FLOAT32 Value; /* 0x0030 */
  FB_FLOAT32 Step; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataFloat) == 56);

}

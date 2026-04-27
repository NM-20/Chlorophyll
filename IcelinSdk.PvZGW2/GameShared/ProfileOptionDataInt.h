#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ProfileOptionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A328
   RuntimeId:        0E64
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CB
   VfTable:          000000014225F410
   Address (Base):   00000001430D7690
*/
#pragma pack(push, 8)
class ProfileOptionDataInt : public ProfileOptionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Min; /* 0x0028 */
  FB_INT32 Max; /* 0x002C */
  FB_INT32 Value; /* 0x0030 */
  FB_INT32 Step; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataInt) == 56);

}

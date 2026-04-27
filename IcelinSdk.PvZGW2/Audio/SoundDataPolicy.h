#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/SoundDataRequestBehavior.h>
#include <IcelinSdk.PvZGW2/Audio/SoundDataReleaseBehavior.h>
#include <IcelinSdk.PvZGW2/Audio/SoundDataReadTarget.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836A50
   RuntimeId:        0421
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          113D
   VfTable:          00000001421F49E0
   Address (Base):   0000000143118570
*/
#pragma pack(push, 8)
class SoundDataPolicy : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  SoundDataRequestBehavior RequestBehavior; /* 0x0018 */
  SoundDataReleaseBehavior ReleaseBehavior; /* 0x001C */
  SoundDataReadTarget PrimeTarget; /* 0x0020 */
  SoundDataReadTarget RequestTarget; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundDataPolicy) == 40);

}

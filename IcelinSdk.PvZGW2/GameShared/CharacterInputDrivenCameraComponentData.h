#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterCameraComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/AimingConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DD40
   RuntimeId:        1185
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D37
   VfTable:          00000001422738A0
   Address (Base):   00000001430D63D0
*/
#pragma pack(push, 16)
class CharacterInputDrivenCameraComponentData : public CharacterCameraComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AimingConstraintsData AimingConstraints; /* 0x0080 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(CharacterInputDrivenCameraComponentData) == 144);

}

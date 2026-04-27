#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider_CharacterSpeedType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834978
   RuntimeId:        0224
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1080
   VfTable:          00000001421ECBF0
   Address (Base):   000000014311B630
*/
#pragma pack(push, 8)
class BoolProvider_CharacterSpeed : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Character; /* 0x0010 */
  BoolProvider_CharacterSpeedType SpeedCheckType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class FloatProvider) MinSpeed; /* 0x0020 */
  FB_HANDLE(class FloatProvider) MaxSpeed; /* 0x0028 */
  FB_BOOLEAN Absolute; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_CharacterSpeed) == 56);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869778
   RuntimeId:        24BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F06
   VfTable:          0000000142355C70
   Address (Base):   00000001430D9CB0
*/
#pragma pack(push, 8)
class ExitDeployWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 NumExitInputs; /* 0x0018 */
  FB_FLOAT32 Timeout; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ExitDeployWeaponData) == 32);

}

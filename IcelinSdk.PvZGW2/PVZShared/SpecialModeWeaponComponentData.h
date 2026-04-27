#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863BA8
   RuntimeId:        2157
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBB
   VfTable:          00000001423531E0
   Address (Base):   00000001430D5650
*/
#pragma pack(push, 16)
class SpecialModeWeaponComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ID; /* 0x0070 */
  FB_HANDLE(class AntEnumeration) SpecialModeEnum; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SpecialModeWeaponComponentData) == 128);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/PVZShared/ShieldComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863C88
   RuntimeId:        2165
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D41
   VfTable:          0000000142353040
   Address (Base):   00000001430D5530
*/
#pragma pack(push, 16)
class PVZShieldCustomizationComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MaterialDecl ServerShieldMaterial; /* 0x0070 */
  ShieldComponentBinding ShieldBinding; /* 0x0074 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZShieldCustomizationComponentData) == 144);

}

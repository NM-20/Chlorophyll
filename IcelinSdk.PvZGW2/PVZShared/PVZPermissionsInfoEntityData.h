#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865E28
   RuntimeId:        2355
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4E
   VfTable:          00000001423508C8
   Address (Base):   00000001430E6400
*/
#pragma pack(push, 8)
class PVZPermissionsInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 PermissionIndex; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(enum GamePermission) ValidPermissions; /* 0x0020 */
  FB_BOOLEAN UseCoopPermission; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZPermissionsInfoEntityData) == 48);

}

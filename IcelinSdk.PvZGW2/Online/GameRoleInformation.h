#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858308
   RuntimeId:        1A27
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB4
   VfTable:          00000001422D59E0
   Address (Base):   000000014310CD50
*/
#pragma pack(push, 8)
class GameRoleInformation : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING RoleName; /* 0x0010 */
  FB_UINT32 Capacity; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GameRoleInformation) == 32);

}

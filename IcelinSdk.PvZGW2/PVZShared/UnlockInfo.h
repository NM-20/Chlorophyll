#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428694C8
   RuntimeId:        2499
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0951
   VfTable:          0000000142355E98
   Address (Base):   00000001430E4F00
*/
#pragma pack(push, 8)
class UnlockInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DisplayName; /* 0x0010 */
  FB_CSTRING Description; /* 0x0018 */
  FB_CSTRING ImagePath; /* 0x0020 */
  FB_UINT32 UnlockId; /* 0x0028 */
  FB_BOOLEAN IsUnlocked; /* 0x002C */
  FB_BOOLEAN IsNew; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UnlockInfo) == 48);

}

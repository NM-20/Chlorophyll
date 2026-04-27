#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849FD8
   RuntimeId:        0E34
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCF
   VfTable:          000000014225F5D8
   Address (Base):   00000001431140D0
*/
#pragma pack(push, 8)
class RichPresenceContext : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_REFARRAY(class RichPresenceContextValue) Values; /* 0x0018 */
  FB_HANDLE(class RichPresenceContextValue) DefaultValue; /* 0x0020 */
  FB_CSTRING StatCode; /* 0x0028 */
  FB_UINT8 Index; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceContext) == 56);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/RichPresenceContextValue.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849FB8
   RuntimeId:        0E32
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1001
   VfTable:          000000014225F5E8
   Address (Base):   0000000143114130
*/
#pragma pack(push, 8)
class RichPresenceContextValueWithKey : public RichPresenceContextValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Key; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) OtherKeys; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceContextValueWithKey) == 48);

}

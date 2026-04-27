#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A068
   RuntimeId:        0E3C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F9
   VfTable:          000000014225F5C8
   Address (Base):   0000000143114070
*/
#pragma pack(push, 8)
class RichPresenceData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class RichPresencePresenceString) PresenceModes; /* 0x0018 */
  FB_HANDLE(class RichPresencePresenceString) DefaultMode; /* 0x0020 */
  FB_HANDLE(class RichPresencePresenceString) InactiveMode; /* 0x0028 */
  FB_HANDLE(class RichPresencePresenceString) MenusMode; /* 0x0030 */
  FB_REFARRAY(class RichPresenceContext) Contexts; /* 0x0038 */
  FB_STDARRAY(struct RichPresenceProperty) Properties; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceData) == 72);

}

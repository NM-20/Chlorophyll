#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A7C8
   RuntimeId:        07F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080C
   VfTable:          000000014220C248
   Address (Base):   00000001431153F0
*/
#pragma pack(push, 8)
class SchematicChannelAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EventChannel) Events; /* 0x0018 */
  FB_STDARRAY(struct LinkChannel) Links; /* 0x0020 */
  FB_STDARRAY(struct PropertyChannel) Properties; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SchematicChannelAsset) == 48);

}

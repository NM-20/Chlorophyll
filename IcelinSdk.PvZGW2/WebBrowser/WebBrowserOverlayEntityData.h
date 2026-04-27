#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876F28
   RuntimeId:        2E3F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A7B
   VfTable:          0000000142395F60
   Address (Base):   00000001430DFF20
*/
#pragma pack(push, 8)
class WebBrowserOverlayEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING URL; /* 0x0018 */
  FB_CSTRING PersistentID; /* 0x0020 */
  FB_BOOLEAN StrongPersistent; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WebBrowserOverlayEntityData) == 48);

}

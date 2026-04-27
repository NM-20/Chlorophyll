#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428759B8
   RuntimeId:        2D34
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB9
   VfTable:          000000014238D990
   Address (Base):   00000001430E0EE0
*/
#pragma pack(push, 8)
class UIActionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ActionKey; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_CSTRING) Params; /* 0x0020 */
  FB_HANDLE(class Asset) ActionAsset; /* 0x0028 */
  FB_STDARRAY(FB_CSTRING) PropertyParams; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIActionEntityData) == 56);

}

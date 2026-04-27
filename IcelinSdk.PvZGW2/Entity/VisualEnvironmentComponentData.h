#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A9A8
   RuntimeId:        0815
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D68
   VfTable:          000000014220C000
   Address (Base):   00000001430B5210
*/
#pragma pack(push, 16)
class VisualEnvironmentComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) PropertyOverrides; /* 0x0070 */
  FB_STDARRAY(FB_UINT32) PropertyOverrideMasks; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(VisualEnvironmentComponentData) == 128);

}

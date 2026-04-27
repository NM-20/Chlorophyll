#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873010
   RuntimeId:        2B7A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0694
   VfTable:          0000000142379598
   Address (Base):   0000000143104C50
*/
#pragma pack(push, 8)
class ExoticTraversalLinkSettings : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxSimultaneous; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class PVZLinkDat) LinkDat; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ExoticTraversalLinkSettings) == 40);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850778
   RuntimeId:        13B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F6
   VfTable:          000000014227C780
   Address (Base):   000000014310FE70
*/
#pragma pack(push, 8)
class PathCreationOptions : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN performInitialNavProbe; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PathCreationOptions) == 32);

}

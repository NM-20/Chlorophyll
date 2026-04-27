#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428531E0
   RuntimeId:        1642
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064B
   VfTable:          00000001422A1420
   Address (Base):   000000014310E4F0
*/
#pragma pack(push, 8)
class VertexShaderFragmentAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FILEREF SourceFile; /* 0x0018 */
  FB_CSTRING Function; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VertexShaderFragmentAsset) == 40);

}

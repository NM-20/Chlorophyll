#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853230
   RuntimeId:        1646
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0664
   VfTable:          00000001422A1400
   Address (Base):   000000014310E490
*/
#pragma pack(push, 8)
class TessellationShaderFragmentAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FILEREF SourceFile; /* 0x0018 */
  FB_CSTRING HSControlPointFunctionName; /* 0x0020 */
  FB_CSTRING HSPatchConstantFunctionName; /* 0x0028 */
  FB_CSTRING DSFunctionName; /* 0x0030 */
  FB_CSTRING VSOutputStructName; /* 0x0038 */
  FB_CSTRING HSControlPointOutputStructName; /* 0x0040 */
  FB_CSTRING HSPatchConstantOutputStructName; /* 0x0048 */
  FB_CSTRING DSOutputStructName; /* 0x0050 */
  FB_STDARRAY(struct TessellationShaderFragmentDefinition) Definitions; /* 0x0058 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TessellationShaderFragmentAsset) == 96);

}

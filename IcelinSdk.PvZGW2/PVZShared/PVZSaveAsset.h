#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F2E8
   RuntimeId:        28E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0689
   VfTable:          000000014236E280
   Address (Base):   00000001431053D0
*/
#pragma pack(push, 8)
class PVZSaveAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PVZSaveBoolAsset) PVZSaveBools; /* 0x0018 */
  FB_REFARRAY(class PVZSaveStringAsset) PVZSaveStrings; /* 0x0020 */
  FB_REFARRAY(class PVZSaveFloatAsset) PVZSaveFloats; /* 0x0028 */
  FB_REFARRAY(class PVZSaveUIntAsset) PVZSaveUints; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveAsset) == 56);

}

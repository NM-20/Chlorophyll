#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BD30
   RuntimeId:        094A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C7
   VfTable:          0000000142212448
   Address (Base):   0000000143115150
*/
#pragma pack(push, 8)
class MaterialGridData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MaterialDecl DefaultMaterial; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct MaterialDecl) MaterialPairs; /* 0x0020 */
  FB_STDARRAY(FB_UINT32) MaterialIndexMap; /* 0x0028 */
  FB_UINT32 DefaultMaterialIndex; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(struct MaterialRelationPropertyPair) MaterialProperties; /* 0x0038 */
  FB_STDARRAY(struct MaterialInteractionGridRow) InteractionGrid; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MaterialGridData) == 72);

}

#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872008
   RuntimeId:        2AFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E74
   VfTable:          000000014236BD38
   Address (Base):   00000001430CFC00
*/
#pragma pack(push, 8)
class UIPuzzlePieceDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ClassName; /* 0x0028 */
  FB_CSTRING CostumeName; /* 0x0030 */
  FB_UINT32 CostumeID; /* 0x0038 */
  FB_INT32 PieceIndex; /* 0x003C */
  FB_CSTRING Name; /* 0x0040 */
  FB_CSTRING Description; /* 0x0048 */
  FB_CSTRING Category; /* 0x0050 */
  FB_CSTRING CardTexturePath; /* 0x0058 */
  FB_CSTRING PieceTexturePath; /* 0x0060 */
  RarenessLevel RarenessLevel; /* 0x0068 */
  FB_INT32 TeamId; /* 0x006C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(UIPuzzlePieceDescription) == 112);

}

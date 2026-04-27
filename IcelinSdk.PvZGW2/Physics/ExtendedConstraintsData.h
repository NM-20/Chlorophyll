#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851460
   RuntimeId:        146E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11EA
   VfTable:          000000014227F548
   Address (Base):   000000014310F210
*/
#pragma pack(push, 8)
class ExtendedConstraintsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Heading; /* 0x0010 */
  FB_FLOAT32 Width; /* 0x0014 */
  FB_FLOAT32 Falloff; /* 0x0018 */
  FB_FLOAT32 AngularConstraintMin; /* 0x001C */
  FB_FLOAT32 AngularConstraintMax; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ExtendedConstraintsData) == 40);

}
